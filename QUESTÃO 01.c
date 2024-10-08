#include <stdio.h>

int main() {
    
    int idade;
    int caso;
    
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    
    if (idade < 18) {
        caso = 1;
    } else if (idade >= 18 && idade <= 65) {
        caso = 2;
    } else if (idade > 65) {
        caso = 3;
    }
    
    
    switch (caso) {
        
        case 1 :
            printf("Menor de idade\n");
            break;
        
        case 2:
            printf("Maior de idade\n");
            break;
        
        case 3:
            printf("Idoso\n");
            break;
    }

    return 0;
}
