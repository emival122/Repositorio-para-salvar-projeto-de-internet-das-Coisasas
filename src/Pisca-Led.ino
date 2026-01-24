// C++ code
//comentario pequenos
/*comentarios grandes*/


// variavel para capturar a porta de conexão do led
int led = 4;

// função para configuração inicial, roda 1 vez no inicio
void setup()
{
 // definir configurações do led INPUT (entrada) OUTPUT (saida)
  pinMode (led,OUTPUT); // definir o led como saida 
  /*
  função de definição de entrada/saida do equipamento 
  receber 2 parametros :
  (porta que o dispositivo esta conectado, OUTPUT)
  */

}

//função de execução de instruções infinitas/loop
void loop()
{
 // ligar o meu led, para ligar usa_se (HIGH)
  digitalWrite(led,HIGH);
  // adicionar pausa usa-se delay
  delay(2000); // espere 2 segundos com led ligado
  // desligar o led, usa-se (LOW)
  digitalWrite(led,LOW);
  delay(2000); // espere 2 segundos com led desligado
  
  
}
