#include<stdio.h>
#include<math.h>
#include <stdlib.h>
main(){
    int matriz[5][4],linha,coluna,media,maior_m=0,matr_mm,soma_m;
    
   
     printf("\n\n=====Matriz=====\n");
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<4; coluna++){
            printf("Digite a matricula do %d aluno: ",linha+1);
            scanf("%d",&matriz[linha][coluna]);
            coluna++;
            printf("Digite a media das provas do %d aluno: ",linha+1);
            scanf("%d",&matriz[linha][coluna]);
            coluna++;
            printf("Digite a media dos trabalhos %d aluno: ",linha+1);
            scanf("%d",&matriz[linha][coluna]);
            coluna++;
            printf("Digite a nota final do %d aluno: ",linha+1);
            scanf("%d",&matriz[linha][coluna]);
            coluna++;
        }
    }
    for(linha=0;linha<5;linha++){
    printf("\nAluno: ");
        for(coluna=0;coluna<3;coluna++)
        {
            printf("  %d  ",matriz[linha][coluna]);
        }
    }
    printf("\n\n===MEDIA DE CADA ALUNO===\n\n");
    for(linha=0;linha<5;linha++){
        printf("\nMedia final do Aluno: ");
        media=(matriz[linha][1]+matriz[linha][2])/2;
        printf("  %d  ",media);
        if(maior_m<media){
            maior_m=media;
            matr_mm=matriz[linha][0];
        }
        soma_m = soma_m+media;
    }
    printf("\n\n===MATRICULA DO ALUNO COM MAIOR MEDIA===\n\n");
    printf("%d \n\n",matr_mm);
    printf("\n\n===MEDIA ARITIMETICA DAS NOTAS FINAIS===\n\n");
    printf("%d \n\n",soma_m/5);

}
