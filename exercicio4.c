#include <stdio.h>

int verificacaotriangulo (float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b) {
        return 1;
    }
    return 0;
}

void resultadotriangulo (int existencia) {
    if (existencia == 1) {
        printf("Os lados foram um triangulo \n");
    }
    else {
        printf("os lados nao formam um triangulo \n");
    }
}

int main() {

    printf("Exercicio 4: triangulo \n");

    float a, b, c;

    printf("Digite o valor de A: \n");
    scanf("%f", &a);
    printf("Digite o valor de B: \n");
    scanf("%f", &b);
    printf("Digite o valor de c: \n");
    scanf("%f", &c);

    int existencia = verificacaotriangulo(a, b, c);
    resultadotriangulo(existencia);

  return 0;
}
