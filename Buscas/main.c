#include <stdio.h>
#include <stdlib.h>
#include "buscabinaria.h"
#include "buscasequencial.h"


int main () {
    int n, *v, i, chave, rs, rb, rsr;

    printf ("Digite a quantidade de elementos do vetor: ");
    scanf ("%d", &n);

    v=(int*)malloc(n*sizeof(int));
    if (!v) {
        printf ("Vetor nao alocado na memoria!!!\n");
        exit(1);
    }

    printf ("\nDigite os elementos do vetor:\n");
    for (i=0; i<n; i++) {
        printf ("V[%d] = ", i);
        scanf ("%d", (v+i));
    }

    printf ("\nDigite o elemento a ser buscado no vetor: ");
    scanf ("%d", &chave);

    rs=buscasequencial(v, n, chave);
    //rb=buscabinaria(v, n, chave);
    rb = bb(chave, 0, n, v);
    if (rs==-1 && rb==-1) printf ("\n\nElemento %d nao encontrado no vetor!!!\n\n\n", chave);
    else {
        printf ("\nElemento %d encontrado na posicao %d do vetor!!! (BS)\n", chave, rs);
        printf ("\nElemento %d encontrado na posicao %d do vetor!!! (BB)\n\n\n", chave, rb);
    }

    return 0;
}

