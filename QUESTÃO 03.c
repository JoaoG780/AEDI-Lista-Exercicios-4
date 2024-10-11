#include <stdio.h>

int main() {

    int arr[] = {45, 99, 67, 23, 89, 12, 55, 78};
    int n = 8;
    int i, j, chave;

    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = chave;
    }

    printf("Preços dos produtos ordenados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
