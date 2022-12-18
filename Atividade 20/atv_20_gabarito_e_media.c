#include<stdio.h>
#include<math.h>
#include <stdlib.h>
main(){
    int i,j,total[12],soma=0,aprovado;
    char matriz[11][4];

    for(i=0;i==0;i++){
        for(j=0;j<4;j++){
            printf("Digite o gabatiro: ");
            scanf("%s",&matriz[0][j]);
        }
    }
    for(i=1;i<4;i++){
        printf("Resposta do %d aluno: ",i);
        for(j=0;j<4;j++){
            printf("%d reposta: ",j+1);
            scanf("%s",&matriz[i][j]);
        }
    }
    printf("========MATRIZ========");
    for(i=0;i<4;i++){
        printf("\n ");
        for(j=0;j<4;j++)
        {
            printf("  %c  ",matriz[i][j]);
        }
    }
    printf("\n======================\n");
    for(i=1;i<4;i++){
        soma=0;
        for(j=0;j<4;j++){
            if(matriz[0][j]==matriz[i][j]){
                soma=soma+1;
                total[i]=soma;
            }else{
               total[i]=soma;
            }
        }
    }
    for (i=1;i<4;i++){
        aprovado=total[i]*100/4/10;
        if(aprovado>=7){
        printf("\nAluno %d, Media %d, Parabens voce esta APORVADO\n",i,aprovado);
        }else{printf("\nAluno %d, Media %d, Voce esta REPORVADO\n",i,aprovado);

        }
    }


}
