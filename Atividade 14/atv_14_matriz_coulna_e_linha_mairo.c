#include<stdio.h>
#include<math.h>
main(){
    int matriz[4][4],linha,coluna,maior=0,maior_l,maior_c;
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<4;coluna++){
            printf("Digite o numero da %d linha %d coluna: ",linha+1,coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            if(matriz[linha][coluna]>maior){
                maior=matriz[linha][coluna];
                maior_l=linha+1;
                maior_c=coluna+1;
            }

        }
    }
    for(int linha=0;linha<4;linha++)
        {printf("\n");
        for(int coluna=0;coluna<4;coluna++)
            {
            printf(" %d ",matriz[linha][coluna]);
            }
        }
    printf("\nO maior numero (%d) esta na linha %d e coluna %d",maior,maior_l,maior_c);
}
