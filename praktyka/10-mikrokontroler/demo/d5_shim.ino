// Демо Д5. ШІМ: число 0…255 → частка часу, коли пін увімкнений
// Схема: пін 9 (~) → 220 Ом → світлодіод → GND
//        осцилограф: «+» на пін 9, «−» на GND; Time per division ≈ 1 ms
//        мультиметр (напруга) — паралельно осцилографу

const int LED = 9;               // тільки пін зі значком ~ : 3, 5, 6, 9, 10, 11
const int ZNACHENNYA = 64;       // 0…255; спробуйте 0, 64, 127, 191, 255

void setup() {
  pinMode(LED, OUTPUT);
  analogWrite(LED, ZNACHENNYA);
  Serial.begin(9600);
  Serial.print("pwm = ");
  Serial.print(ZNACHENNYA);
  Serial.print("   duty = ");
  Serial.print(ZNACHENNYA * 100L / 255);
  Serial.println(" %");
}

void loop() {
  // нічого: ШІМ генерує таймер чипа сам, програма вільна
}
