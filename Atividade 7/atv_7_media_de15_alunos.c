#include<stdio.h>
#include<math.h>
main(){
    float vetor[15],media,r;
    int j;

    printf("====MEDIA DE 15 ALUNOS====\n\n");
    for (j=0;j<15;j++){
        printf("Informe a nota do %d aluno: ",j+1);
        scanf("%f", &vetor[j]);
    }
   // printf("O vetor e:");
   // for(j=0;j<15;j++){
   //     printf(" %.2f ",vetor[j] );

   for(j=0;j<15;j++){
        media = media +vetor[j];
        r = media / 15;
   }
    printf("A media dos alunos e: %.2f", r);


}
