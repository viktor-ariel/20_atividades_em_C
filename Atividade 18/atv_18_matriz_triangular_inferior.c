#include<stdio.h>
#include<math.h>
#include <stdlib.h>
main(){
    int matriz[4][4],linha,coluna;
   
     printf("\n\n=====Matriz=====\n");
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<4; coluna++){
            matriz[linha][coluna]=rand()%20;
        }
    }
    for(linha=0;linha<4;linha++){
    printf("\n");
        for(coluna=0;coluna<4;coluna++)
        {
            printf("  %d  ",matriz[linha][coluna]);
        }
    }
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<4; coluna++){
            if(linha<coluna){
                matriz[linha][coluna]=0;
            }
        }
    }
    printf("\n\n===Matriz Triangular Inferior===\n");
    for(linha=0;linha<4;linha++){
    printf("\n");
        for(coluna=0;coluna<4;coluna++)
        {
            printf("  %d  ",matriz[linha][coluna]);
        }
    }
}
    

