#include <stdio.h>
#include <string.h>
#include <ctype.h>ae

int main() {
    char senha[100];
    int tem_especial = 0;
    int tamanho_ok = 0;

    printf("Digite a sua senha: ");
    scanf("%s", senha);


    int tam = strlen(senha);
    if (tam >= 8) {
        tamanho_ok = 1;
    }


    for (int i = 0; senha[i] != '\0'; i++) {

        if (!isalnum(senha[i])) {
            tem_especial = 1;
        }
    }


    if (tamanho_ok && tem_especial) {
        printf("Válida\n");
    } else {
        printf("Inválida\n");

        if (!tamanho_ok) {
            printf("- Erro: A senha deve possuir pelo menos 8 caracteres.\n");
        }
        if (!tem_especial) {
            printf("- Erro: A senha deve conter pelo menos um caractere especial (@, #, $, etc).\n");
        }
    }

    return 0;
}