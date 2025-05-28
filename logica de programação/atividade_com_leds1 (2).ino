
// C++ code
//

int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 8;

void setup()
{



  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.begin(9600);

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);



}

void loop()
{

  int escolhaDaOperacao;

  do{
    Serial.println("Menu de leds-");
    Serial.println("1 - Verde  acender");  
    Serial.println("2 - Verde apagar");
    Serial.println("3 - Amarelo acender");
    Serial.println("4 - Amarelo apagar");
    Serial.println("5 - vermelho acender");
    Serial.println("6 - vermelho apagar");
    Serial.println("7 - acender todos os leds");
    Serial.println("8 - desligar todos os leds");
    Serial.println("0 - desligar");
    Serial.println("Esolha umas das operacoes");

  while(!Serial.available());
  escolhaDaOperacao = Serial.parseInt();



  switch(escolhaDaOperacao){

    case 1:
    digitalWrite(ledVerde, HIGH);
    Serial.println("led verde ligado");

    break;

    case 2:
    digitalWrite(ledVerde, LOW);
    Serial.println("led verde desligado");

    break;

    case 3:
    digitalWrite(ledAmarelo, HIGH);
    Serial.println("led amarelo ligado");
    break;

    case 4:
    digitalWrite(ledAmarelo, LOW);
    Serial.println("led amarelo desligado");
    break;

    case 5:
    digitalWrite(ledVermelho, HIGH);
    Serial.println("led vermelho ligado");
    break;

    case 6:
    digitalWrite(ledVermelho, LOW);
    Serial.println("led vermelho desligado");
    break;

    case 7:
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, HIGH);
    Serial.println("todos os leds ligados");
    break;

    case 8:
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    Serial.println("todos os leds desligados");
    break;

    case 0:
    Serial.println("desligado!");
    break;

    default:
    Serial.println("");
  }
} while (escolhaDaOperacao != 0);//fim do Do
  
delay(1000);

}