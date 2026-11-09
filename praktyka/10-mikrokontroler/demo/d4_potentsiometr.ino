// Демо Д4. АЦП: напруга 0…5 В → число 0…1023
// Схема: потенціометр — крайні виводи на 5V і GND, середній (повзунок) на A0
//        мультиметр (напруга): «+» на A0, «−» на GND

void setup() {
  Serial.begin(9600);
}

void loop() {
  int n = analogRead(A0);              // 0…1023
  float u = n * 5.0 / 1023.0;          // назад у вольти

  Serial.print("n = ");
  Serial.print(n);
  Serial.print("   U = ");
  Serial.print(u, 2);
  Serial.println(" V");

  delay(200);
}
