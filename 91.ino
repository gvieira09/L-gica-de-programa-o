// C++ code
//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.



String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada do nome
  Serial.println("Digite o nome do funcionario:");
  while (!Serial.available());
  nome = Serial.readStringUntil('\n');

  delay(500);

  // Entrada do cargo
  Serial.println("Digite o cargo do funcionario:");
  while (!Serial.available());
  cargo = Serial.readStringUntil('\n');

  delay(500);

  // Entrada do salário
  Serial.println("Digite o salario do funcionario:");
  while (!Serial.available());
  salario = Serial.parseFloat();

  // Processamento
  //verificar se o funcionário terá aumento
  if(salario < 1000){
    //calcular o aumento
    salario = salario = (salario * 1.10);//calcula 10% no salario

  }
  

  // Saída
  Serial.println("funcionario: " + nome);//imprime o nome
  Serial.println("cargo: " + cargo);//imprime o cargo
  Serial.println("salario: " + String(salario));//imprimir o salario
 

 delay(1000);
}



