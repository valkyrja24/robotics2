// Демо Д2. Цифровий вихід: на піні тільки 0 або 5 В
// Схема: пін 8 → резистор 220 Ом → анод світлодіода; катод → GND
//        мультиметр (напруга): «+» на пін 8, «−» на GND

const int LED = 8;
const int PAUZA = 1000;          // мс; спробуйте 100 і 20 — що бачить мультиметр?

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);       // на піні 5 В
  delay(PAUZA);
  digitalWrite(LED, LOW);        // на піні 0 В
  delay(PAUZA);
}
