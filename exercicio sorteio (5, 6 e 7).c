#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortearNumero() {
    return (rand() % 100) + 1;
}

int obterPalpite() {
    int palpite = 0; // Inicializada com 0 para forçar a entrada no loop

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

int main() {

    srand(time(NULL));
    int numeroSorteado = sortearNumero();
    int palpiteUsuario;
    int tentativas = 0;
    int maximoTentativas = 5;
    int acertou = 0;

    while (tentativas < 5 && !acertou) {
        printf("Tentativa %d de %d:\n", tentativas + 1, maximoTentativas);
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
