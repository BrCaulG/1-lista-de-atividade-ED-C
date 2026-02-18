#include <stdio.h>
int main() {
    int notas,notas50,notas20,notas10;
    printf("Digite o valor em dinheiro: \n");
    scanf("%d",&notas);
    notas50=notas/50;
    notas= notas%50;
    notas20=notas/20;
    notas=notas%20;
    notas10=notas/10;
    printf("notas de 50 R$: %d\nnotas de 20 R$: %d\nnotas de 10 R$: %d\n", notas50,notas20,notas10);
    return 0;

}