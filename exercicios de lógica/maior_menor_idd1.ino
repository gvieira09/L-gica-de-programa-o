//Faça um programa que peça a idade do usuario e informe ele é ou nao maior de idade


int idade = 18;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite sua idade: ");
  while(!Serial.available() ){}
  idade = Serial.parseInt ();
  
  Serial.println("idade: " + String(idade) );

  if(idade >= 18 ){//se retornar verdadeiro - losango sim
    
     Serial.println("Maior de idade" );
    
  }else {//falso - losango nao
    
     Serial.println("menor de idade ");
  } 
  delay(6000);
}