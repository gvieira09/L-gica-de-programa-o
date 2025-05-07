//Faça um programa que receba a idade de uma pessoa em anos e 
//Imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de Variáveis
float idade = 0;
float idadeMeses = 0;
float idadeDias = 0;
float idadeHoras = 0;
float idadeMinutos = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada 
  Serial.println("Digite sua idade em anos");//;mostra msg na tela 
  while( !Serial.available() );//espera o usuário dar <Enter>
  idade = Serial.parseInt();//transofrma a idade digitada em número 
  idadeMeses = Serial.parseInt();
  idadeDias = Serial.parseInt();
  idadeHoras = Serial.parseInt();
  idadeMinutos = Serial.parseInt();

  
 //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
  
 //Saída
 Serial.println("Sua idade em meses: " + String(idadeMeses) );//imprime o texto
 Serial.println("Sua idade em dias: " + String(idadeDias) );//imprime o texto
 Serial.println("Sua idade em horas: " + String(idadeHoras) );//imprime o texto
 Serial.println("Sua idade em minutos: " + String(idadeMinutos) );//imprime o texto
  delay(1000);
}