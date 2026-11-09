# Готові туторіали Tinkercad до демо Д1–Д6

Офіційні уроки Tinkercad і відкриті схеми спільноти, з яких можна стартувати, а не
збирати з нуля. Для кожного демо: що взяти, що змінити під наш сценарій, на що звернути
увагу.

## Як цим користуватись

1. Відкрити урок або схему → **Start / Copy and Tinker / Tinker this** — Tinkercad
   створить копію у вашому акаунті (потрібен вхід).
2. Підправити під таблицю з'єднань у `README.md` поруч і вставити наш скетч
   (**Code → Text**, стерти все, вставити).
3. Перевірити, записати фактичні числа в таблицю «Перед парою» в `README.md`.
4. **Share** → посилання — у таблицю «Посилання на готові схеми».

⚠️ Посилання знайдені пошуком; самі сторінки Tinkercad з середовища, де їх готували,
не відкривались. Тому точна проводка й код усередині уроків **не перевірені** —
подивіться кожен перед тим, як давати студентам. Офіційні уроки (`/learn/overview/…`)
стабільні, схеми спільноти (`/things/…`, `/embed/…`) автор може видалити.

---

## Загальне — відкрити першим

| Що | Посилання | Коментар |
|---|---|---|
| Колекція Arduino-уроків Tinkercad | [learn/circuits/collection/arduino](https://www.tinkercad.com/learn/circuits/collection/arduino) | Усі офіційні уроки нижче — тут, одним списком. Добре дати студентам як «що пройти самому» |
| Learn Circuits | [learn/circuits](https://www.tinkercad.com/learn/circuits) | Стартові уроки по самій електроніці, без Arduino |
| Навчальна програма з електроніки для викладачів | [teachers/electronics](https://www.tinkercad.com/teachers/electronics) | Готові плани занять від Tinkercad; корисно, щоб звірити темп |
| Довідка: типові схеми | [help-center/common-circuits](https://www.tinkercad.com/help-center/common-circuits) | Короткі еталонні схеми, якщо щось не працює |
| Як вести онлайн-заняття в Tinkercad | [Instructables](https://www.instructables.com/How-to-Teach-an-Online-Circuits-Class-With-Tinkerc/) | Класи (Classrooms), видача завдань, перегляд студентських схем |

---

## Д1. Коло без Arduino, мультиметр, закон Ома

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ План уроку «Program an LED Light Show» | [lessonplans/program-an-led-light-show](https://www.tinkercad.com/lessonplans/program-an-led-light-show) | Офіційний план: починається саме з кола «батарейка 9 В + резистор + LED», далі Arduino. У них резистор **1 кОм** — замініть на 470 Ом, щоб збіглися наші числа (≈ 15 мА) |
| Довідка: мультиметр | [help-center/multimeter](https://www.tinkercad.com/help-center/multimeter) | Як перемкнути режим (напруга / струм / опір) і куди ставити щупи. Прочитати перед Д1 |
| Multimeter basics pt.1 | [things/elprWPJS59u](https://www.tinkercad.com/things/elprWPJS59u-multimeter-basics-pt1-measure-current-and-voltage) | Схема спільноти: вимір струму й напруги. Добра основа — вольтметр і амперметр уже стоять |
| Circuit Analysis | [things/3wO6lFW5Glf](https://www.tinkercad.com/things/3wO6lFW5Glf-circuit-analysis) | Три резистори, мультиметри на кожному. Для ⭐-питання «напруга ділиться між елементами» |
| Voltage, Current, Resistance через Tinkercad | [Instructables](https://www.instructables.com/Understanding-Voltage-Current-and-Resistance-Throu/) | Покрокове пояснення закону Ома на LED і батарейці — можна дати дизайнерам почитати після пари |

**На що звернути увагу:** перевірте, чи Tinkercad справді позначає світлодіод без
резистора як пошкоджений (за описами — так, він підсвічує елементи з перевищеним
струмом). Це ключовий момент Д1.

## Д2. Цифровий вихід

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ LED Flash with Arduino and Multimeters | [things/iyF8BtXixEL](https://www.tinkercad.com/things/iyF8BtXixEL-led-flash-with-arduino-and-multimeters) | Майже готовий Д2: блимання + мультиметри на виході. Скопіювати, звірити пін |
| Lesson 1 — Blinking LED | [things/bDHquWl5k2q](https://www.tinkercad.com/things/bDHquWl5k2q-lesson-1-blinking-led) | Схема спільноти з піном **D8** і 220 Ом — збігається з нашою таблицею. Додати мультиметр |
| Офіційний урок Blink an LED With Digital Output | [learn/overview/OMX1W9AL26F9EMF](https://www.tinkercad.com/learn/overview/OMX1W9AL26F9EMF) | Найпростіший старт для студентів, які зовсім не працювали з Arduino |
| Multiple LEDs & Breadboards | [learn/overview/O94BCSIL26F9EV3](https://www.tinkercad.com/learn/overview/O94BCSIL26F9EV3?type=circuits) | Як користуватись макетною платою. Для тих, хто плутається з дротами |

## Д3. Кнопка і загублені натискання

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ Pushbutton (Digital Input) | [learn/overview/OT6OSJQL26F9GYT](https://www.tinkercad.com/learn/overview/OT6OSJQL26F9GYT) | Офіційний урок: кнопка керує світлодіодом. Імовірно, кнопка там із зовнішнім резистором, а в нас `INPUT_PULLUP` — якщо так, покажіть обидва: це хороший привід пояснити «пін не має висіти в повітрі» |
| Digital Input / Analog Input | [learn/overview/OH411VKJH0TNG79](https://www.tinkercad.com/learn/overview/OH411VKJH0TNG79?type=circuits) | Комбінований модуль: кнопки, потенціометр, Serial Monitor. Добре як домашнє для тих, хто пропустив пару |

**Чого в туторіалах немає:** експерименту з `delay(1000)` і загубленими натисканнями.
Його додаєте самі — це наш скетч `d3_knopka.ino`, і він головний у Д3.

## Д4. Потенціометр і АЦП

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ Potentiometer (Analog Input) | [learn/overview/OG8Z4G7L26F9GZ6](https://www.tinkercad.com/learn/overview/OG8Z4G7L26F9GZ6?type=circuits) | Офіційний урок `analogRead`. Додати мультиметр на A0 і замінити код на `d4_potentsiometr.ino`, щоб друкувалися і `n`, і вольти |
| Arduino Class: Input/Output (Becky Stern) | [Instructables](https://www.instructables.com/InputOutput/) | Потенціометр на A0, світлодіод на пін 9 (ШІМ) — готовий місток Д4 → Д5. Є вбудовані модулі Tinkercad |

## Д5. ШІМ на осцилографі

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ Fading LED With Analog Output | [learn/overview/ORHT6NFL26F9GSW](https://www.tinkercad.com/learn/overview/ORHT6NFL26F9GSW?type=circuits) | Офіційний урок `analogWrite`: плавне згасання. Осцилографа там, найімовірніше, немає — додаєте самі між піном і GND |
| Довідка: осцилограф | [help-center/oscilloscope](https://www.tinkercad.com/help-center/oscilloscope) | Як підключити й налаштувати |
| Blink LED On/Off with Oscilloscope | [embed/17q2GFeYwP9](https://www.tinkercad.com/embed/17q2GFeYwP9?editbtn=1) | Схема спільноти: осцилограф уже на виході Arduino. Можна взяти як основу і замінити скетч на `d5_shim.ino` |
| analogWrite + осцилограф (Deep Blue Embedded) | [deepbluembedded.com](https://deepbluembedded.com/arduino-analogwrite/) | Стаття з осцилограмами ШІМ і посиланням на симуляцію в Tinkercad. Хороші картинки для слайда |

⚠️ **Масштаб осцилографа.** У наших матеріалах написано «Time per division ≈ 1 ms».
Джерела розходяться: одні схеми спільноти задають час на поділку, в іншій сказано,
що осцилограф Tinkercad показує **весь екран**, а не поділку. Перевірте у своїй версії
й за потреби виправте формулювання в `README.md` поруч (Д5) і в завданні 4 студентів.
Мета одна: щоб на екрані було видно 3–5 періодів (період ШІМ ≈ 2 мс).

## Д6. Нічник

| Що | Посилання | Коментар |
|---|---|---|
| ⭐ Photoresistor (Analog Input) | [learn/overview/OXQL7IEL26F9H0U](https://www.tinkercad.com/learn/overview/OXQL7IEL26F9H0U?type=circuits) | Офіційний урок: читання фоторезистора через аналоговий вхід — найближче до нашого нічника. Замінити код на `d6_nichnyk.ino` (поріг / пропорційно, калібрування) |
| photoresistor | [things/2BLkZ0kZz2X](https://www.tinkercad.com/things/2BLkZ0kZz2X-photoresistor) | Запасний варіант від спільноти |

## Драбина ⭐3 — мотор через драйвер

| Що | Посилання | Коментар |
|---|---|---|
| Arduino DC Motor | [things/llEFwFIEoMs](https://www.tinkercad.com/things/llEFwFIEoMs-arduino-dc-motor) | Схема спільноти: мотор через транзистор. Перевірте проводку перед показом |
| Dual Motor Tank з L293D | [Instructables](https://www.instructables.com/Arduino-With-Dual-Motor-Tank-Coded-in-TinkerCad-Co/) | Два мотори через драйвер L293D — фактично шасі робота з Gears «у залізі». Сильним студентам і треку П |

## Для студентів, які хочуть більше

| Що | Посилання | Коментар |
|---|---|---|
| Arduino Class (Becky Stern, Instructables) | [Your First Experiments](https://www.instructables.com/Your-First-Experiments/) | Безкоштовний курс англійською; уся практика має вбудовані схеми Tinkercad. Перші два уроки покривають наше заняття |
| Basic Arduino LED Experiments | [блог Tinkercad](https://www.tinkercad.com/blog/basic-arduino-led-experiments-in-tinkercad-circuits) | Блимання, згасання, RGB — короткий огляд від самого Tinkercad |
