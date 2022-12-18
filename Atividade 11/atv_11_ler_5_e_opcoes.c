#include<stdio.h>
#include<math.h>
main(){
    float vetor[5];
    int j,num;
    printf("===DIGITE 5 NUMEROS PARA O VETOR===\n");
    for(j=0;j<5;j++){
        printf("Digite o %d numero: ",j+1);
        scanf("%f",&vetor[j]);
        }
    do{
        system("cls");
        printf("===Digite 0 para sair===\n");
        printf("===Digite 1 para mostrar a ordem direta===\n");
        printf("===Digite 2 para mostrar a ordem inversa===\n");
        scanf("%d",&num);
        system("cls");

        if(num==1){
            for(j=0;j<5;j++){
                printf(" %.2f ",vetor[j]);
            }
        }
        else if(num==2){
            for(j=4;j>=0;j--){
                printf(" %.2f ",vetor[j]);
            }
        }
        else if(num==0){
           printf("\nFIM DO PROGRAMA");
        }
        else{
           printf("Nao entendi, digite novamente...");
        }
        printf("\n\n\n");
        system("pause");
    }
    while(num!=0);
}
