#include<stdio.h>
#include<math.h>
main(){
    int matriz1[4][4], matriz2[4][4],linha,coluna,matriz3[4][4];
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<4;coluna++){
            printf("Digite o valor da %d linha e %d coluna da primeria matriz: ",linha+1,coluna+1);
            scanf("%d",&matriz1[linha][coluna]);
        }
    }
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<4;coluna++){
            printf("Digite o valor da %d linha e %d coluna da segunda matriz: ",linha+1,coluna+1);
            scanf("%d",&matriz2[linha][coluna]);
        }
    }
    for(linha=0;linha<4;linha++){
        printf("\n");
        for(coluna=0;coluna<4;coluna++){
            printf(" %d ",matriz1[linha][coluna]);
        }
    }printf("\n");
    for(linha=0;linha<4;linha++){
        printf("\n");
        for(coluna=0;coluna<4;coluna++){
            printf(" %d ",matriz2[linha][coluna]);
        }
    }
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<4;coluna++){
            if(matriz1[linha][coluna]>matriz2[linha][coluna]){
                matriz3[linha][coluna]=matriz1[linha][coluna];
            }else{
                matriz3[linha][coluna]=matriz2[linha][coluna];
            }
        }
    }
    printf("\nA nova matriz com os valores mais alto de cada e: \n");
    for(linha=0;linha<4;linha++){
        printf("\n");
        for(coluna=0;coluna<4;coluna++){
            printf(" %d ",matriz3[linha][coluna]);
        }
    }
}
