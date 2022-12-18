#include<stdio.h>
#include<locale.h>
#include <string.h>

main(){
    int vetor[10];
    int j,sp=0,negativos=0;

    printf("\n\n==============NUMEROS NEGATIVOS E SOMA DOS POSITIVOS==============\n\n");

    for(j=0;j<10;j++){
        printf("Digite %d numero : ",j+1);
        scanf("%d", &vetor[j]);
    }
     for(j=0;j<10;j++){
        if(vetor[j]%2==0){
            sp = sp + vetor[j];
        }
    }
    for(j=0;j<10;j++){
        if(vetor[j]<0){
            negativos++;
        }
    }
    printf("\nA soma dos pares e: %d \n", sp);
    printf("\nA quantidade de numeros negativos e: %d \n", negativos);


}
