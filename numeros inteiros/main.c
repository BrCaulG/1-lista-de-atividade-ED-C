#include <stdio.h>

int main() {
    int numeros[200];
    int i = 0;
    int numero;
    int repetido = 0;

    printf("Digite os numeros inteiros ou qualquer tecla pra parar: ");

    while (scanf("%d", &numero) == 1) {
        numeros[i] = numero;
        i++;
        if (i >= 200) break;
    }

    for (int a = 0; a < i; a++) {
        for (int j = a + 1; j < i; j++) {
            if (numeros[a] == numeros[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 1) break;
    }

    if (repetido == 1) {
        printf("Ha numeros repetidos na lista.\n");
    } else {
        printf("Todos os elementos sao unicos.\n");
    }

    return 0;
}