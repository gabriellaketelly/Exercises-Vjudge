#include <stdio.h>
#include <stdlib.h>

int main(){

    int number_of_tests, numbers_quantity;
    scanf("%d", &number_of_tests);

    while(number_of_tests--){
        scanf("%d", &numbers_quantity);
        int total_sum = 0;
        int *array = (int*)malloc(numbers_quantity*sizeof(int));
        
        for(int i = 0; i < numbers_quantity ; i++){
            scanf("%d", &array[i]);
            total_sum += array[i];
        }

        int yes = 0;
        int left_sum = 0; 

        for(int i = 0; i < numbers_quantity; i++){
            if (left_sum == total_sum - left_sum - array[i]){
                yes = 1;
                break;
            } 
            left_sum += array[i];
        }

        if (yes == 1)
            printf("YES\n");
        else 
            printf("NO\n");

        free (array);
    }

    return 0;
}
