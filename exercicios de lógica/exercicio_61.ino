// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse numero em centimetros 


// Declaração de variáveis
float centimetros = 0;



void setup()
{
  Serial.begin(9600); 
}

void loop()
{
 //pedir as polegadas para o usuario
  
   Serial.println("Qual e as polegadas?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
   centimetros = Serial.parseInt();//transofrma o centimetro digitado em número 

  
 
  
  float polegadas = centimetros * 2.54;
  
  //exibir os dados na serial 
  Serial.println("medida em centimetros : " + String (polegadas) );
  
}
  
  