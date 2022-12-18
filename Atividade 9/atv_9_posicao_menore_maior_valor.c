#include<stdio.h>
main(){
    int vetor[5],j,maior=0,menor,p_maior=0,p_menor=0;

    printf("\n\n===Ler 5 posicoes e mostrar a posicao do maior e menor===\n\n");
    for(j=0;j<5;j++){
        printf("DIGITE O %d NUMERO: ",j+1);
        scanf("%d",&vetor[j]);

        if(vetor[j]>maior){
            maior=vetor[j];
            p_maior=j+1;
        }
        if(vetor[j]<menor){
            menor=vetor[j];
            p_menor=j+1;
        }


    }
    printf("\nA posicao do maior numero e: %d\n", p_maior);
    printf("\nA posicao do menor numero e: %d\n", p_menor);
    //pritntf("%d", );

}
