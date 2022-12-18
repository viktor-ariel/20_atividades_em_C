#include<stdio.h>
#include<locale.h>
#include <string.h>

main(){

    setlocale(LC_ALL,"Portuguese");
    int vetor[10],maior=0,menor,i;

    printf("\n=============Digite 10 valores para saber o maior e o menor=============\n\n");
    for(i=0;i<10;i++){
        printf("DIGITE O %d NUMERO ",i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]>0){

            if(vetor[i]>maior){
            maior=vetor[i];
            }
            if(vetor[i]<menor){
            menor=vetor[i];
            }
        }
    }




    printf("\n");
    for(i=0;i<10;i++){
    printf(" %d ",vetor[i]);}
    printf("\n\nMenor valor e %d e o maior valor %d\n\n", menor,maior);
}


