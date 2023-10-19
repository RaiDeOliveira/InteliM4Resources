// Código para piscar 3 leds sequencialmente

void setup() {
  // Definição das portas como output
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
}

void loop() {
  digitalWrite(25, HIGH); //Voltagem máxima
  delay(500); //Delay de 500 milissegundos
  digitalWrite(25, LOW); //Voltagem mínima (0)
  digitalWrite(26, HIGH);
  delay(500);
  digitalWrite(26, LOW);
  digitalWrite(27, HIGH);
  delay(500);
  digitalWrite(27, LOW);
}
