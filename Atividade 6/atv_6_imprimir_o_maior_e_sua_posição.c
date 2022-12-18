#include<stdio.h>
#include<math.h>
main(){
    int vetor[10],j,maior=0,posicao;
    printf("\n\n===DIGITE 10 PARA SABER O MAIOR E SUA POSICAO===\n\n");
    for(j=0;j<10;j++){
        printf("Digite o %d numero: ", j+1);
        scanf("%d",&vetor[j]);

        if(vetor[j]>maior){
            maior=vetor[j];
            posicao=j+1;
        }
    }

    printf("\n\nO maior numero e: %d \nSua posicao e: %d\n\n",maior,posicao);
}
