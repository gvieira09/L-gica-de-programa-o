// C++ code
//idades para filmes :Até 9 anos: “Apenas filmes infantis”De 10 até 13 anos: “Filmes infantis e infantojuvenis”De 14 até 17 anos: “Filmes até classificação 14 anos”De 18 até 59 anos: “Todos os tipos de filmes”60 anos ou mais: “Todos os tipos de filmes + desconto para idosos”Idade negativa ou maior que 120: “Idade inválida, verifique os dados”


void setup()
{
  Serial.begin(9600);
  
}
    void loop()
{
     
   
 int idade = 0;
  
  Serial.println("Informe a idade");//informar uma mensagem na tela solicitando a idade
 while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
 idade = Serial.parseInt();//aguardar o número digitado na variável
  
  
  Serial.begin(9600);
  
  Serial.println("Filmes no cinema");
  Serial.println();
  
  Serial.println("a pessoa tem " + String(idade) + "anos");
  //idade = 8
  
      if(idade >= 0 && idade < 9) {
  Serial.println("Apenas filmes infantis");
  }else if(idade >= 10 && idade < 13) {
  Serial.println("Filmes infantis e infantojuvenis");
  }else if(idade >= 14 && idade < 17) {
  Serial.println("Todos os tipos de filmes");
  }else if(idade >= 18 && idade < 59) {//de 18 até 59
  Serial.println("Todos os tipos de filmes + desconto para idosos");
  Serial.println("Cadastre na categoria adulto");
  } else {//idades abaixo de 9 anos, ou seja, de 8 pra baixo
  Serial.println("Idade Invalida, verifique os dados");
  }         
    
  
    Serial.println("Sua idade: " + String (idade));
}
    
  


