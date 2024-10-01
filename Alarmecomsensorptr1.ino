int sensorPIR = 3;
int buzzer = 5;
int ledVermelho = 7; // Pino do LED vermelho

void setup() {
  pinMode(sensorPIR, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT); // Define o LED vermelho como saída
  delay(2000); // Espera 2 segundos para estabilizar o sensor
}

void loop() {
  int detectarPresenca = digitalRead(sensorPIR);
  
  if (detectarPresenca == HIGH) { // Verifica se há presença
    tone(buzzer, 264);
    digitalWrite(ledVermelho, HIGH); // Apaga o LED vermelho
  } else {
    noTone(buzzer);
    digitalWrite(ledVermelho, LOW); // Acende o LED vermelho
  }
}
