#include <stdio.h>
int main() {
    int maiorMedia=0;
    double soma=0,media;
    float notas[] = {7.5, 4.0, 9.2, 5.5, 8.0, 6.5, 3.2, 10.0, 7.0, 5.8};
    float maiorNota=notas[0];
    for(int i =0; i< 10;i++){
        soma= notas[i]+soma;

    }
    media = soma/10;
    for(int j =0; j<10;j++){
        if(notas[j]>= media){
            maiorMedia++;
        }

    }
    for(int k=0;k<10;k++){
        if(notas[k]> maiorNota){
            maiorNota= notas[k];
        }

    }
    printf("Media dos alunos: %lf\n",media);
    printf("Maiores que a media: %d\n",maiorMedia);
    printf("A maior nota e: %2.f",maiorNota);
    return 0;

}