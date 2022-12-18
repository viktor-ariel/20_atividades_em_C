#include<stdio.h>
main(){
    int vetor[6],j;

    for(j=0;j<6;j++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[j]);
    }
    system("cls");
    printf("Os numeros digitados foram ");
    for(j=0;j<6;j++){
    printf("%d ",vetor[j]);
    }
    printf("\n\n");
}
