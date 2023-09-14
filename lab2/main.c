#include <math.h>
#include <stdio.h>

int ex1() {
  int a, b;
  printf("\n\n");
  printf("n1: ");
  scanf("%d", &a);

  printf("n2: ");
  scanf("%d", &b);
  // a = 1;   b = 2;

  if (b == 0) {
    printf("b deve ser maior que 0");
  }

  int soma = a + b;
  int subtracao = a - b;
  int multiplicacao = a * b;
  int divisao = a / b;

  printf("Soma: %d\n", soma);
  printf("Subtração: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão inteira: %d\n", divisao);

  return 0;
}

int ex2() {
  float peso, altura;
  // peso = 2.0; altura = 3.0;
  printf("\n\n");
  printf("Digite o peso (em quilogramas): ");
  scanf("%f", &peso);

  printf("Digite a altura: ");
  scanf("%f", &altura);

  float imc = peso / (pow(altura, 2));

  printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.",
         peso, altura, imc);

  return 0;
}

int ex3() {
  float c, f;
  printf("\n\n");
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &c);

  f = (9 / 5) * c + 32.0;
  printf(
      "Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit",
      c, f);
  return 0;
}

int ex4() {
  float c1, c2, h;
  printf("\n\n");
  printf("Digite cateto 1: ");
  scanf("%f", &c1);

  printf("Digite cateto 2: ");
  scanf("%f", &c2);

  h = sqrt(pow(c1, 2) + pow(c2, 2));
  printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa "
         "igual a %.2f.",
         c1, c2, h);
  return 0;
}

int ex5() {
  float a, r;
  printf("\n\n");
  printf("raio: ");
  scanf("%f", &r);

  a = M_PI * pow(r, 2);
  printf("Um círculo com raio %.2f tem área igual a %.2f.", r, a);
  return 0;
}

int main() {
  ex1();
  // ex2();
  // ex3();
  // ex4();
  // ex5();
  return 0;
}