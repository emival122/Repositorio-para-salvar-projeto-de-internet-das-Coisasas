Projeto de Poste Inteligente
Este projeto foi desenvolvido no Tinkercad, como parte da disciplina de Internet das Coisas (IoT). O objetivo é criar um protótipo com Arduino que simula um poste inteligente, permitindo que o Arduino leia a intensidade da luz e controle a intensidade do LED com base nas leituras do sensor.

Componentes Utilizados

Arduino Uno: Placa de microcontrolador utilizada para programar e controlar os componentes.
LED: Diodo emissor de luz que será controlado com base na leitura do sensor de luminosidade.
Resistor para o LED: Um resistor (geralmente de 220Ω ou 330Ω) é utilizado em série com o LED para limitar a corrente e evitar que o LED queime.
Sensor de Luminosidade (por exemplo, LDR - Resistor Dependente de Luz): Componente que varia sua resistência de acordo com a quantidade de luz que incide sobre ele.
Resistor para o LDR: Um resistor (geralmente entre 10kΩ e 100kΩ) é utilizado em um divisor de tensão com o LDR, permitindo a leitura do nível de luminosidade no pino analógico.
Fios de Conexão: Fios jumpers para realizar as conexões entre os componentes e a placa Arduino.

Montagem do Circuito
![Imagem do Circuito](Posteinteligente.png)

Explicação do Código



variaveis
int led =3;
int sensorluminosidade= A0;
 variavel para capturar a luminosidade
int luz =0; 

void setup()
{
   led é de saida
  pinMode(led,OUTPUT);
   sensor é de entrada
  pinMode(sensorluminosidade,INPUT);
}

void loop()
{
  capturar o que o sensor leu no ambiente
  analogRead é usado para leitura analogica
  
  luz = analogRead(sensorluminosidade);
  /* as portas analogicas capturam dados que variam
   de 0 até 1023 */
  
  SE ESTIVER COM POUCA LUZ NO AMBIENTE
  if(luz<500){
   digitalWrite(led,HIGH); LIGAR LED
    
  passar ao led intensidade maxima
  analogWrite(led,1023); 
    
   } else if (luz >= 500 && luz < 900) {
  
  
   passar ao led intensidade média
    analogWrite(led,500); 
    
  }else{  SE TIVER LUZ
   digitalWrite(led,LOW); DESLIGAR LED
  
   passar ao led intensidade minima
   analogWrite(led,0);
  
  }
  
}
