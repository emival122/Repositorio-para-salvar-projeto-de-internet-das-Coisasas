// C++ code
// variaveis dos led
int ledVermelho = 1;
int ledAmarelo = 2;
int ledVerde = 3;


void setup()
{
  //definir leds como saida 
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
}

void loop()
{
  //ligar o led vermelho
  digitalWrite(ledVermelho,HIGH); //ligar vermelho
  digitalWrite(ledAmarelo,LOW); //desligar amarelo
  digitalWrite(ledVerde,LOW); //desligar Verde
  delay(5000); // espere 5 segundos
  
  //Ligar o led amarelo
  digitalWrite(ledVermelho,LOW); //desligar vermelho
  digitalWrite(ledAmarelo,HIGH); //ligar amarelo
  digitalWrite(ledVerde,LOW); //desligar Verde
  delay(5000); // espere 5 segundos
  
   //Ligar o led verde
  digitalWrite(ledVermelho,LOW); //desligar vermelho
  digitalWrite(ledAmarelo,LOW); //desligar amarelo
  digitalWrite(ledVerde,HIGH); //ligar Verde
  delay(5000); // espere 5 segundos
}