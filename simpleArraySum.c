#include <stdio.h>


    int main(){
        int tamanho;
        int vetor[1000];
        int somatorio = 0;

        scanf("%d", &tamanho);

        for(int i = 0; i < tamanho; i++)
            scanf("%d", &vetor[i]);
        

        for(int i = 0; i < tamanho; i++)
            somatorio += vetor[i];
        

        printf("%d", somatorio);

        return 0;
    }
