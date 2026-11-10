const int SENSOR = A0;
const int LED = 9;

const bool PROPORTSIYNO = false;
const int PORIH = 514;

const int NMIN = 54;
const int NMAX = 974;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int n = analogRead(SENSOR);

  int pwm;
  if (PROPORTSIYNO) {
    pwm = map(n, NMIN, NMAX, 255, 0);
    pwm = constrain(pwm, 0, 255);
  } else {
    pwm = (n < PORIH) ? 255 : 0;
  }

  analogWrite(LED, pwm);

  Serial.print("n = ");
  Serial.print(n);
  Serial.print("   pwm = ");
  Serial.println(pwm);

  delay(100);
}
