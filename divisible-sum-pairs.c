#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, divider, pairs = 0;
    scanf("%d %d", &size, &divider);

    int *array = (int*)malloc(size*sizeof(int));

    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    
    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++){
            int sum = array[i] + array [j];
            if (sum % divider == 0)
                pairs++;
        }

    printf("%d", pairs);
    
    return 0;
}
