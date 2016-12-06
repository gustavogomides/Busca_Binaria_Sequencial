#include <stdio.h>

/*
int buscabinaria (int *vet, int n, int chave) {
     int esquerda = 0;
     int direita = n-1;
     int meio;
     while (esquerda <= direita) {
          meio = (esquerda + direita)/2;
          if (chave == vet[meio]) return meio;
          else if (chave < vet[meio]) direita = meio-1;
          else esquerda = meio+1;
     }
     return -1;
}
 */
int bb(int x, int e, int d, int v[]) {
    if (e == d - 1) return d; // base da recursão
    else {
        int m = (e + d) / 2;
        if (v[m] < x)
            return bb(x, m, d, v);
        else
            return bb(x, e, m, v);
    }
}
int insercaoBB(int n, int a[]) {
    int i, x, l, r, m=0, j; 
    for(i=2; i<n; i++) {
        x=a[i];
        l=0;
        r=i;
        while (l<r) {
            m=(l+r)/2;
            if(a[m]<x)
                l=m+1;
            else
                r=m;
        }
        for(j=i; j<r+1; j++)
            a[r]=a[j-1];
        a[r]=x;
    }
}