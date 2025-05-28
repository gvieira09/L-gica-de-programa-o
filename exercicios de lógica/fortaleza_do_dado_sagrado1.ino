#include <Servo.h>

// Pinos dos componentes
const int LED_VERMELHO = 10;
const int LED_VERDE = 7;
const int LED_AZUL1 = 2;
const int LED_AZUL2 = 3;
const int LED_AZUL3 = 4;
const int SERVO_PINO = 12;

// Objetos e variáveis
Servo servo;
int numeroAleatorio;
int tentativas = 0;
int acertos = 0;
bool portaAberta = false;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0)); // Semente de aleatoriedade

  // Configuração dos LEDs
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL1, OUTPUT);
  pinMode(LED_AZUL2, OUTPUT);
  pinMode(LED_AZUL3, OUTPUT);

  // Configura o servo motor
  servo.attach(SERVO_PINO);
  servo.write(0); // Começa com a porta fechada

  // Mensagem inicial
  Serial.println("Bem-vindo a Fortaleza do Dado Sagrado!");
  Serial.println("Tente adivinhar o numero de 1 a 6.");
  Serial.println("Acumule 3 acertos para abrir a porta.");
}

void loop() {
  if (portaAberta) return;

  numeroAleatorio = random(1, 7); // número entre 1 e 6

  Serial.println("Novo numero escolhido. Digite seu palpite (1-6):");

  while (!Serial.available()); // espera entrada
  int palpite = Serial.parseInt();
  while (Serial.available()) Serial.read(); // limpa buffer

  if (palpite < 1 || palpite > 6) {
    Serial.println("Número inválido! Tente novamente com um número entre 1 e 6.");
    return;
  }

  tentativas++;

  if (palpite == numeroAleatorio) {
    acertos++;
    Serial.println("acertou. Você é digno.");

    piscarLed(LED_VERDE, 3);
    acenderJoiaAzul(acertos);

    if (acertos == 3) {
      abrirPorta();
    }
  } else {
    Serial.print("errou o número era: ");
    Serial.println(numeroAleatorio);
    piscarLed(LED_VERMELHO, 3);
  }

  Serial.print("Progresso: ");
  Serial.print(acertos);
  Serial.print(" acertos | ");
  Serial.print(tentativas);
  Serial.println(" tentativas");
}

// Funções auxiliares
void piscarLed(int pino, int vezes) {
  for (int i = 0; i < vezes; i++) {
    digitalWrite(pino, HIGH);
    delay(300);
    digitalWrite(pino, LOW);
    delay(300);
  }
}

void acenderJoiaAzul(int etapa) {
  if (etapa == 1) digitalWrite(LED_AZUL1, HIGH);
  if (etapa == 2) digitalWrite(LED_AZUL2, HIGH);
  if (etapa == 3) digitalWrite(LED_AZUL3, HIGH);
}

void abrirPorta() {
  portaAberta = true;
  Serial.println("parabens!");

  for (int pos = 0; pos <= 90; pos++) {
    servo.write(pos);
    delay(15);
  }

  // Piscar LEDs azuis e verde para celebrar
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AZUL1, HIGH);
    digitalWrite(LED_AZUL2, HIGH);
    digitalWrite(LED_AZUL3, HIGH);
    delay(200);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AZUL1, LOW);
    digitalWrite(LED_AZUL2, LOW);
    digitalWrite(LED_AZUL3, LOW);
    delay(200);
  }

  // Deixa LEDs azuis acesos como símbolo de vitória
  digitalWrite(LED_AZUL1, HIGH);
  digitalWrite(LED_AZUL2, HIGH);
  digitalWrite(LED_AZUL3, HIGH);
}
