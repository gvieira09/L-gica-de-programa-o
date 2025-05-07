//Faça um programa que indentifique as cores do semafaro



String cor = "";

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a cor: ");
  while(!Serial.available() ){}
  cor = Serial.readString ();
  
  

  if(cor=="verde" ){//se retornar verdadeiro - losango sim
    
     Serial.println("siga" );
    
  }else {//falso - losango nao
    
     Serial.println("pare ");
  } 
  delay(6000);
}