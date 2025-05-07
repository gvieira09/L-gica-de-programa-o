// C++ code
// Faça um programa que receba o nome, o peso e a altura de uma pessoa 

// Declaração de variáveis
String nome = "";
float peso = 0;
float altura = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
 //pedir o nome para o usuário
  
   Serial.println("Qual e o seu nome?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
   nome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
  Serial.println("Digite sua altura digitada ");//;mostra msg na tela 
  while( !Serial.available() );//espera o usuário dar <Enter>
  altura = Serial.parseFloat();//transofrma a altura digitada em número 
  
  Serial.println("Digite seu peso digitado ");//;mostra msg na tela 
  while( !Serial.available() );
  peso = Serial.parseFloat();
  
  float imc = peso /(altura * altura);
  
  //exibir os dados na serial 
  Serial.println("Nome Infromado: " + nome);
  Serial.println("imc : " + String(imc));
  

}