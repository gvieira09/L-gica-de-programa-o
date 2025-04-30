// C++ code
//Variáveis 
String nome = "";
String sobrenome = "";
int idade = 0;
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
    
  Serial.println("Qual e o seu sobrenome?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar <Enter>
   sobrenome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
  Serial.println("Qual e  sua idade?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
   idade = Serial.parseInt();//converte o texto que o usuário digitou para inteiro, antes de guardar na variável 
  
  
  //exibir os dados na serial 
  Serial.println("Nome Infromado: " + nome);
  Serial.println("Nome Infromado: " + sobrenome);
  Serial.println("Idade Informada: " + String (idade));// converte o número para poder juntar todo o texto
  Serial.println();//escreve uma linha vazia
}