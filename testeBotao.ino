#define botao 12
#define led 4

void setup() {
  pinMode(botao,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.print(digitalRead(botao));
  delay(100);
  Serial.println("");
  Serial.print(digitalRead(led));
  delay(100);

  if(digitalRead(botao) == HIGH) {
    // se o botão pressionado
    digitalWrite(led, HIGH);
    delay(500);

    Serial.println("apertou");
}
  else
    if(digitalRead(botao)== LOW) {
      digitalWrite(led, LOW);
      delay(500);

      Serial.println("não apertou");
}
}
