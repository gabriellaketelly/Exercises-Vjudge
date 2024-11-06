#include <stdio.h>
#include <stdlib.h>

int search_first_occurrence(int *array, int size, int key){
    int beginning = 0;
    int end = size - 1;
    int result = -1;

    while(beginning <= end){
        int middle = (beginning + end) / 2;

        if(array[middle] == key){
            result = middle;
            end = middle - 1;
        } else if (array[middle] < key){
            beginning = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return result;

}

int search_last_occurrence(int *array, int size, int key){
    int beginning = 0;
    int end = size - 1;
    int result = -1;

    while(beginning <= end){
        int middle = (beginning + end) / 2;
        if(array[middle] == key){
            result = middle;
            beginning = middle + 1;
        } else if (array[middle] < key){
            beginning = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return result;

}

int main(){

    int size, key;

    scanf("%d", &size);
    int *array = (int*)malloc(size*sizeof(int));

    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    scanf("%d", &key);

    int first_occurrence = search_first_occurrence(array, size, key);
    int last_occurrence = search_last_occurrence(array, size, key);
    
    int occurrences_quantity = last_occurrence - first_occurrence + 1;

    if (first_occurrence == -1)
        printf("-1 -1 0");
    else 
        printf("%d %d %d", first_occurrence, last_occurrence, occurrences_quantity);

    return 0;
}
