#include <stdio.h>
#include <stdlib.h>

void exibesituacaoacademica (float media, int porcentagem) {
    if (porcentagem < 75) {
        printf("REPROVADO \n");
    }
    else if (porcentagem > 75 && media <= 7.5) {
        printf("DE EXAME\n");
    }
    else {
        printf("APROVADO \n");
    }
}

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

int sortearNumero() {
    return (rand() % 100) + 1;
}

int obterPalpite() {
    int palpite;

    while (palpite < 1 || palpite > 100) {

        printf("Digite o seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);
        
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! O palpite deve ser entre 1 e 100.\n");
        }
    }
    
    return palpite;
}

int verificarPalpite(int palpite, int sorteado) {
    if (palpite == sorteado) {
        return 1;
    } else if (palpite < sorteado) {
        printf("Você chutou muito baixo!\n\n");
        return 0;
    } else {
        printf("Você chutou muito alto!\n\n");
        return 0;
    }
}

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

    printf("Exercicio 2: calculo de imc\n");
    float peso, altura;
    printf("Digite seu peso em kg: \n");
    scanf("%f", &peso);
    printf("digite sua altura em metros: \n");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f. \n", peso, altura, imc);

    printf("Exercicio 3: média \n");
    
    float media;
    int porcentagem;

    printf("digite sua média: \n");
    scanf("%f", &media);
    printf("Digite sua frequência: \n");
    scanf("%d", &porcentagem);

    exibesituacaoacademica(media, porcentagem);
    
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

    printf("Exercicio 5: sorteio \n");

    int numeroSorteado = sortearNumero();
    int palpiteUsuario;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 5 && !acertou) {
        printf("Tentativa %d de %d:\n", tentativas + 1, MAX_TENTATIVAS);
        palpiteUsuario = obterPalpite();
        tentativas++;
        acertou = verificarPalpite(palpiteUsuario, numeroSorteado);
    }

    
    if (acertou) {
        printf("\nParabéns!!! Você acertou!\n");
        printf("Número de tentativas: %d\n", tentativas);
    } else {
        printf("\nVocê excedeu o número máximo de tentativas.\n");
        printf("O número sorteado era: %d\n", numeroSorteado);
    }


    return 0;
}
