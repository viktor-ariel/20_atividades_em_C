#include<stdio.h>
#include<math.h>
main(){
    int matriz[4][4], contagem = 0;
   
  
    for(int linha=0; linha<4; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
            printf("%d linha, %d coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
   
    for(int linha=0; linha<4; linha++)
        for(int coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] > 10)
                contagem++;
 
 
    printf("\n\n Existem na matriz %d números maiores que 10.", contagem);
   
}
