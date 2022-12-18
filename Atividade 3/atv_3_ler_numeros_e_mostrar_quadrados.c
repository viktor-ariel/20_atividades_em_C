#include<stdio.h>
#include<math.h>
main(){
    int vetor[10],j;

    printf("\n===Digite 10 numeros para mostrar o quadrado de cada ===\n\n");
    for(j=0;j<10;j++){
        printf("Digite %d numero: ",j+1);
        scanf("%d",&vetor[j]);
    }
    system("cls");
    printf("Numeros digitados: ");
    for(j=0;j<10;j++){
        printf("%d ",vetor[j]);
    }


    printf("\nO quadrado dos numeros sao: ");
    for(j=0;j<10;j++){
        vetor[j] = pow(vetor[j],2);
        printf("%d ",vetor[j] );
    }

//23 e 5
}
