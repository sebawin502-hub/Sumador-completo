int pinA = 2;
int pinB = 3;
int pinCin = 4;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinCin, OUTPUT);
}

void loop() {
  // Caso 1: 0 + 1 + 0 = 1 (Suma=1, Acarreo=0) -> Solo LED Azul encendido
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinCin, LOW);
  delay(4000);

  // Caso 2: 1 + 1 + 0 = 2 (Suma=0, Acarreo=1) -> Solo LED Naranja encendido
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinCin, LOW);
  delay(4000);

  // Caso 3: 1 + 1 + 1 = 3 (Suma=1, Acarreo=1) -> Ambos LEDs encendidos
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinCin, HIGH);
  delay(4000);
}