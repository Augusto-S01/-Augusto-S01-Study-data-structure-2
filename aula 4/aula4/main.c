#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){
    int x;
    ArvBin *raiz;

    raiz = cria_ArvBin();

    insere_arvBin(raiz, 150);
    insere_arvBin(raiz, 110);
    insere_arvBin(raiz, 100);
    insere_arvBin(raiz, 130);
    insere_arvBin(raiz, 120);
    insere_arvBin(raiz, 140);
    insere_arvBin(raiz, 160);


    if(vazia_arvBin(raiz))
        printf("A arvore esta vazia.");
    else{
        printf("A arvore possui elementos.");
    };

    x = altura_arvBin(raiz);
    printf("A altura da arvore: %d", x);

    x = totalNO_arvBin(raiz);
    printf("O total de nos da arvore: %d", x);



    printf("Visitando em pre-ordem: ");
    preOrdem_arvBin(raiz);

    printf("Visitando em ordem: ");
    emOrdem_arvBin(raiz);


    printf("Visitando em pos-ordem: ");
    posOrdem_arvBin(raiz);


    liberar_arvBin(raiz);
}
