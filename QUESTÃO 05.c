#include <stdio.h>

#define TAMANHO 10

int main() {
    int lista[TAMANHO];
    int valorProcurado;
    int inicio = 0;
    int fim = TAMANHO - 1;
    int meio;
    int encontrado = 0;

    printf("Digite %d numeros inteiros em ordem CRESCENTE:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &valorProcurado);

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (lista[meio] == valorProcurado) {
            printf("O numero %d foi encontrado na posiçao %d.\n", valorProcurado, meio + 1);
            encontrado = 1;
            break;
        } else if (lista[meio] > valorProcurado) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    if (!encontrado) {
        printf("O numero %d nao foi encontrado na lista.\n", valorProcurado);
    }

    return 0;
}
