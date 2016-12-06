#include <stdio.h>

int buscasequencial(int *v, int n, int chave) {
    int i;
    for (i=0; i<n; i++)
        if (*(v+i) == chave) return i;
    return -1;
}
