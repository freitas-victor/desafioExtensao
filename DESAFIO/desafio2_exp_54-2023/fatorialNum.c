
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
// Created by 55989 on 01/12/2023.

//DESAFIO: FAÇA UM ALGORITMO QUE RETORNE O FATORIAL DE UM NUMERO.
//Requisitos:
//1 - O programa deve solicitar ao usuario que insira um numero inteiro nao negativo.
//2 - O programa deve verificar se o numero digitado pelo usuario é nao negativo. Se nao for, o programa deve
//deve exibir uma mensagem de erro  e pedir que o usuario insira um numero valido
//3 - O programa deve calcular o fatorial do numero inserido pelo usuario.
//4- O programa deve exibir o resultado.


int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL," ");
    int num,res;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d",&num);
    if(num<0){
        printf("Numero invalido. Digite um numero maior que 0.\n");
    }else{
        res = fatorial(num);
        printf("O fatorial de %d é %d\n",num,res);
    }


    return 0;
}
