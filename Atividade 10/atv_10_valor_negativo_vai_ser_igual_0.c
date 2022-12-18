#include<stdio.h>
#include<math.h>
main(){
    int vetor[10],j;
    printf("\n===TODOS OS NUMEROS NEGATIVOS RECEBERAO O VALOR 0===\n\n");
    for(j=0;j<10;j++){
        printf("Digite o %d numero: ", j+1);
        scanf("%d",&vetor[j]);
        if (vetor[j]<0){
            vetor[j]=0;
        }
    }
    printf("\nO valor dos Vetores sao:");
    for(j=0;j<10;j++){
        printf(" %d",vetor[j]);
    }





}
