#include <stdio.h>  
int main() {
    int horas,minutos,segundos;
    printf("informe os segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos=segundos % 3600;
    minutos = segundos / 60;
    segundos=segundos % 60;
    printf("%d hora(s)\n%d minutos\n%d segundos",horas, minutos, segundos);
    return 0;
    
}