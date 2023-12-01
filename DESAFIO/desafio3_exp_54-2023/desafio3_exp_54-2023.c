//
// Created by 55989 on 01/12/2023.
//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setlocale(LC_ALL," ");
    int ordem,soma;
    soma = 0;
    printf("Digite a ordem da matriz: \n");
    scanf("%d",&ordem);
    if (ordem > 0){
        int matriz [ordem][ordem];
        int i, j;
        for(i = 0; i < ordem; i ++){
            for(j = 0;j < ordem; j++){
                printf("Digite o elemento da matriz na posição [%d][%d]",i,j);
                scanf("%d",&matriz[i][j]);
                if(i==j){
                    soma += matriz[i][j];
                }
            }
        }

        printf("A soma da diagonal principal é %d\n",soma);
    }else{
        printf("Ordem invalida, digite uma ordem positiva.\n");
    }


    return 0;
}