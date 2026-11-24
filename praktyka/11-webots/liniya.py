from controller import Robot

TIMESTEP = 32
BAZA = 1.3
KP = 0.005
PORIH = 570
CHAS = 60
MAX = 6.28
R = 0.0205

robot = Robot()

livyi = robot.getDevice("left wheel motor")
pravyi = robot.getDevice("right wheel motor")
for m in (livyi, pravyi):
    m.setPosition(float("inf"))
    m.setVelocity(0.0)
enk = [robot.getDevice("left wheel sensor"), robot.getDevice("right wheel sensor")]
for e in enk:
    e.enable(TIMESTEP)

gs = []
for imya in ("gs0", "gs1", "gs2"):
    s = robot.getDevice(imya)
    s.enable(TIMESTEP)
    gs.append(s)

print("BAZA = %.2f рад/с, KP = %.4f, PORIH = %d" % (BAZA, KP, PORIH))
krokiv = 0
bez_linii = 0
ostannya = 0.0

while robot.step(TIMESTEP) != -1:
    krokiv += 1
    livo, centr, pravo = [s.getValue() for s in gs]

    if krokiv % 16 == 0 and robot.getTime() <= 10:
        print("t = %4.1f с   gs0 %4.0f   gs1 %4.0f   gs2 %4.0f" % (robot.getTime(), livo, centr, pravo))

    if min(livo, centr, pravo) < PORIH:
        pomylka = livo - pravo
        ostannya = pomylka
    else:
        bez_linii += 1
        pomylka = 600.0 if ostannya >= 0 else -600.0

    v_l = BAZA + KP * pomylka
    v_p = BAZA - KP * pomylka

    v_l = max(-MAX, min(MAX, v_l))
    v_p = max(-MAX, min(MAX, v_p))
    livyi.setVelocity(v_l)
    pravyi.setVelocity(v_p)

    if robot.getTime() >= CHAS:
        livyi.setVelocity(0)
        pravyi.setVelocity(0)
        shlyakh = (enk[0].getValue() + enk[1].getValue()) / 2 * R
        print("ПІДСУМОК: KP = %.4f, BAZA = %.2f — без лінії %.1f %% кроків, шлях %.2f м"
              % (KP, BAZA, bez_linii * 100.0 / krokiv, shlyakh))
        break
