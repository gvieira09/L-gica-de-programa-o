// C++ code
//notas da prova aprovados acima da média 6 e acima de 75% de frequencia

void setup()
{
  Serial.begin(9600);
  
}
    void loop()
{
     
   
 int nota = 0;
 int frequencia = 0;
 
  
  Serial.println("Informe a nota");//informar uma mensagem na tela solicitando a nota
 while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
 nota = Serial.parseInt();//aguardar o número digitado na variável
      
   Serial.println("Informe a frequencia");//informar uma mensagem na tela solicitando a frequencia
 while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
 nota = Serial.parseInt();//aguardar o número digitado na variável
  
  
  Serial.begin(9600);
  
  Serial.println("Aprovados");
  Serial.println();
  
  if(nota >= 6 && nota < 10) {
  Serial.println("Aprovados pela nota");
  }else if(frequencia >= 75 && frequencia < 100) {
  Serial.println("Aprovados pela média");
  } else {//notas abaixo de 6, ou seja, de 5 pra baixo
  Serial.println("Nota Invalida, reprovado pela nota");
  } else if {//frequencias abaixo de 75, ou seja, de 74 pra baixo
  Serial.println("Frequencia Invalida, reprovado pela frequencia");
  

  }   

}