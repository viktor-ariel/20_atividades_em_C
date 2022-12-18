#include<stdio.h>
#include<math.h>
main(){
    int matriz[5][5],linha,coluna,numero,linha_proc=0,coluna_proc=0;
   
  
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            printf("digite o valor da %d linha e %d coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha=0;linha<5;linha++){
        printf("\n");
        for(coluna=0;coluna<5;coluna++){
            printf(" %d ",matriz[linha][coluna]);
        }
    }
    printf("\nQual valor vc quer buscar na matriz? ");
    scanf("%d",&numero);
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
            {
                if (matriz[linha][coluna]==numero){
                    linha_proc=linha;
                    coluna_proc=coluna;
                }
            }
    }
    if (linha_proc!=0){printf("\nNumero esta na linha %d e coluna %d",linha_proc+1,coluna_proc+1);}
    else{printf("\nNumero nao encontrado");}
}
