#include<stdio.h>
#include<locale.h>
#include <string.h>

main(){
    char nome[3][10];
    int i;
    for(i=0;i<3;i++){
        printf("Digite o nome: ");
        scanf("%s", &nome[i]);
    }
     for(i=2;i>=0;i--){
        printf("%s \n", nome[i]);

    }


}
