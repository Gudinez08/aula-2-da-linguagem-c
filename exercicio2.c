#include <stdio.h>

int main() {

    printf("Exercicio 2: calculo de imc\n");
    float peso, altura;
    printf("Digite seu peso em kg: \n");
    scanf("%f", &peso);
    printf("digite sua altura em metros: \n");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f. \n", peso, altura, imc);
  
  return 0;
}
