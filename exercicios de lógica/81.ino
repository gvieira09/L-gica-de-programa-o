// C++ code
//Variáveis
String appTempo = "chuva";
  
  
void setup()
{
 Serial.begin(9600); //inicia a comunicação serial
}

void loop()
{// rodar o programa eternamente até que você desligue o arduino
  
  if ( appTempo == "chuva" ) {
    Serial.println("Hoje vai chover, por favor");
    Serial.println("Pegue o guarda-chuva");
  } else {
    Serial.println("Hoje esta ensolarado, bm passei");
  
}
  
   Serial.println("Saindo de casa");
  
   delay(3000);//aguard 30 segundos
}