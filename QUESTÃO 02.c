#include <stdio.h>

int main() {
    
    int num, i;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Numero invalido!");
        return 1;
    }
    
    printf("\n");
    printf("Numeros pares entre 1 e %d :", num);
    printf("\n");
    
    for(i = 1; i < num; i++) {
        
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
