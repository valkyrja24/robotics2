// Демо Д3. Цифровий вхід і «кадри»: чому delay губить події
// Схема: кнопка між піном 2 і GND (резистор не потрібен — INPUT_PULLUP)
//        пін 8 → 220 Ом → світлодіод → GND

const int KNOPKA = 2;
const int LED = 8;
const int ZATRYMKA = 0;          // мс; поставте 1000 і натискайте швидко

int natyskan = 0;
bool bulaNatysnuta = false;

void setup() {
  pinMode(KNOPKA, INPUT_PULLUP); // відпущена = HIGH, натиснута = LOW
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool natysnuta = (digitalRead(KNOPKA) == LOW);   // 1. відчути — один «кадр»

  if (natysnuta && !bulaNatysnuta) {               // 2. вирішити: щойно натиснули?
    natyskan++;
    Serial.print("natyskan = ");
    Serial.println(natyskan);
  }
  bulaNatysnuta = natysnuta;

  digitalWrite(LED, natysnuta ? HIGH : LOW);       // 3. діяти

  delay(ZATRYMKA);                                 // поки спимо — кнопку не бачимо
}
