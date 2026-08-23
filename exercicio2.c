#include <stdio.h>

int main() {

    printf("Exercicio 2: calculo de imc\n");
    float peso, altura;
    printf("Digite seu peso em kg: \n");
    scanf("%f", &peso);
    printf("digite sua altura em metros: \n");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f. \n", peso, altura, imc);
  
  return 0;
}
