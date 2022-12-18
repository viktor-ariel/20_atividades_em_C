#include<stdio.h>
#include<locale.h>
#include <string.h>

main(){
    int vetor[10];
    int j,par=0;
    printf("\n\n==============Contar quantos numeros pares possui no vetor==============\n\n");
    for(j=0;j<10;j++){
        printf("Digite %d numero : ",j+1);
        scanf("%d", &vetor[j]);
    }
     for(j=0;j<10;j++){
        if(vetor[j]%2==0){
            par++;
        }
    }
    printf("\nO vetor possui %d valores pares\n", par);


}
