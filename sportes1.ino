// C++ code
//infantil, cadete, juvenil, junior, adulto
void setup()
{
  int idade = 4;
  
  
  Serial.begin(9600);
  
  Serial.println("Academia do Davi");
  Serial.println();
  
  Serial.println("Seu sobrinho tem " + String(idade) + "anos");
  //idade = 4
  if(idade >= 5 && idade < 8) {//de 5 até 7
  Serial.println("Cadastre na categoria Infantil");
  }else if(idade >= 8 && idade < 12) {//de 8 até 11
  Serial.println("Cadastre na categoria cadete");
  }else if(idade >= 12 && idade < 14) {//de 12 até 14
  Serial.println("Cadastre na categoria Juvenil");
  }else if(idade >= 15 && idade < 18) {//de 15 até 18
  Serial.println("Cadastre na categoria Infantil");
  }else if(idade >= 18 ) {//de 18 pra cima
  Serial.println("Cadastre na categoria adulto");
  } else {//idades abaixo de 5 anos, ou seja, de 4 pra baixo
  Serial.println("Não pode participar de esportes na academia do Davi");
           
    
    
}
}
    void loop()
{

}