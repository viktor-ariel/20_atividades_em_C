#include<stdio.h>
#include<math.h>
main(){
    int matriz[3][3],linha,coluna,soma=0;
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite o numero para ficar na %d linha e %d coluna: ",linha+1,coluna+1);
            scanf("%d",&matriz[linha][coluna]);
        }
    }
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            if(coluna==linha){
                soma=matriz[linha][coluna] + soma;
            }
        }
    }
    for(linha=0;linha<3;linha++){
        printf("\n");
        for(coluna=0;coluna<3;coluna++)
        {
            printf(" %d ",matriz[linha][coluna]);
        }
    }
    printf("\nO resultado da soma da diagonal principal e: %d",soma);
}
