#include <stdio.h>
#include <stdlib.h>

int main(){
    int array_size, brray_size, numero;
    int array[10000] = {0}, brray[10000] = {0};

    scanf("%d", &array_size);
    for(int i = 0; i < array_size; i++){
        scanf("%d", &numero);
        array[numero]++;
    }

    scanf("%d", &brray_size);
    for(int i = 0; i < brray_size; i++){
        scanf("%d", &numero);
        brray[numero]++;
    }


    for(int i = 0; i < 10000; i++)
        if (array[i] < brray[i])
            printf("%d ", i);
    
}
