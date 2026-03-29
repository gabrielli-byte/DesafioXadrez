#include <stdio.h>

// TORRE 
void moveTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moveTorre(casas - 1);
}

// RAINHA 
void moveRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moveRainha(casas - 1);
}

// BISPO 
void moveBispo(int casas) {
    if (casas == 0) return;

    
    for (int i = 0; i < 1; i++) {           
        for (int bispo = 0; bispo < 1; bispo++) {       
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moveBispo(casas - 1);
}

// CAVALO 
void moveCavalo(int movimentos) {

    for (int cavalo = 0; cavalo < movimentos; cavalo++) {

        int cima = 0;
        int direita = 0;

        for (int i = 0; i < 3; i++) {

            
            if (cima < 2) {
                printf("Cima\n");
                cima++;
                continue;
            }

            
            if (direita < 1) {
                printf("Direita\n");
                direita++;
                break; 
            }
        }
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 2;

    // TORRE
    printf("\nMovimento da Torre\n");
    moveTorre(casasTorre);

    // BISPO
    printf("\nMovimento do Bispo\n");
    moveBispo(casasBispo);

    // RAINHA
    printf("\nMovimento da Rainha\n");
    moveRainha(casasRainha);

    // CAVALO
    printf("\nMovimento do Cavalo\n");
    moveCavalo(casasCavalo);

    return 0;
}