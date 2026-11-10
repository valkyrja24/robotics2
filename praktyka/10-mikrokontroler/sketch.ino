// Робота 10, завдання 5. Відчути → вирішити → діяти: нічник
// Схема: 5V → фоторезистор → A0 → резистор 10 кОм → GND   (дільник напруги)
//        пін 9 (~) → 220 Ом → світлодіод → GND
// Більше світла → менший опір фоторезистора → більше n

const int SENSOR = A0;
const int LED = 9;

const bool PROPORTSIYNO = false; // false — поріг (релейно), true — плавно (як П-регулятор)
const int PORIH = 514;           // посередині між NMIN і NMAX: (54 + 974) / 2

// калібрування: що показує n у Serial Monitor при найтемнішому і найсвітлішому
const int NMIN = 54;             // найтемніше n (виміряно)
const int NMAX = 974;            // найсвітліше n (виміряно)

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int n = analogRead(SENSOR);                        // 1. відчути (АЦП)

  int pwm;                                           // 2. вирішити
  if (PROPORTSIYNO) {
    pwm = map(n, NMIN, NMAX, 255, 0);                // темніше → яскравіше
    pwm = constrain(pwm, 0, 255);
  } else {
    pwm = (n < PORIH) ? 255 : 0;
  }

  analogWrite(LED, pwm);                             // 3. діяти (ШІМ)

  Serial.print("n = ");
  Serial.print(n);
  Serial.print("   pwm = ");
  Serial.println(pwm);

  delay(100);                                        // крок до наступного «кадру»
}
