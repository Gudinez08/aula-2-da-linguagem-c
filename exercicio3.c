#include <stdio.h>

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

int main() {

  printf("Exercicio 3: média \n");
    
    float media;
    int porcentagem;

    printf("digite sua média: \n");
    scanf("%f", &media);
    printf("Digite sua frequência: \n");
    scanf("%d", &porcentagem);

    exibesituacaoacademica(media, porcentagem);
  
  return 0;
}
