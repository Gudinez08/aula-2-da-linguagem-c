#include <stdio.h>

int main()
{
     printf("Exercicios em aula \n");
    
    printf("Exercicio 1: operações aritmeticas\n");
    int num1, num2;
    printf("Insira o primeiro numero inteiro: \n");
    scanf("%d", &num1);
    printf("Insira o segundo numero inteiro: \n");
    scanf("%d", &num2);

    int soma, sub, mult;
    float div;
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("%d é o valor da soma \n", soma);
    printf("%d é o valor da subtração \n", sub);
    printf("%d é o valor da multiplicação \n", mult);
    printf("%f é o valor da divisão \n", div);

    return 0;
}
