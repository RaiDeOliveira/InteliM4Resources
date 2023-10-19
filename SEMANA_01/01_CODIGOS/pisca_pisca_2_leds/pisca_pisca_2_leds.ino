// Código de pisca-pisca para LED

void setup() {
  pinMode(13, OUTPUT); //define led verde na porta 13
  pinMode(12, OUTPUT); //define led vermelho na porta 12
}

void loop() {
  digitalWrite(13, HIGH); //acende led verde
  digitalWrite(12, LOW); //apaga led vermelho
  delay(500); //delay de meio segundo
  digitalWrite(13, LOW); //apaga led verde
  digitalWrite(12, HIGH); //acende led vermelho
  delay(500); //delay de meio segundo
}