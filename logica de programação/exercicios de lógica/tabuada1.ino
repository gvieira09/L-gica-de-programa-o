void setup() {
  Serial.begin(9600);
  
  Serial.println("Digite um numero que deseja calcular a tabuada");
}

void loop() {
if (Serial.available() > 0) {
int numero = Serial.parseInt(); 
    
if (numero >= 1 && numero <= 10) {
Serial.print("Tabuada do numero ");
Serial.println(numero);
      
int contador = 1;
while (contador <= 10) {
int resultado = numero * contador;
Serial.print(numero);
Serial.print(" x ");
Serial.print(contador);
Serial.print(" = ");
Serial.println(resultado);
        
contador++;
delay(500); // delay de 0.5 segundos entre cada linha
}
      
Serial.println("Digite outro numero de 1 a 10 para a nova conta:");
} else {
Serial.println("Numero errado, Digite um numero de 1 a 10.");
}
    
// Limpa o serial
while (Serial.available() > 0) {
Serial.read();
}
  
}

}
