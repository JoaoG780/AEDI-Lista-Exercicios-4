#include <stdio.h>

int main() {
    int i, j, indiceMaior, temp;
    
    int notas[8] = {3, 7, 8, 10, 5, 6, 9, 1};
    int n = 8;

    for (i = 0; i < n - 1; i++) {
        
        indiceMaior = i;
        for (j = i + 1; j < n; j++) {
            if (notas[j] > notas[indiceMaior]) { 
                indiceMaior = j;
            }
        }

        if (indiceMaior != i) {
            temp = notas[i];
            notas[i] = notas[indiceMaior];
            notas[indiceMaior] = temp;
        }
    }

    printf("Notas dos alunos decrescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");

    return 0;
}
