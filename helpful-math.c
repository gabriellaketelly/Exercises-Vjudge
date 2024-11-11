#include <stdio.h>
#include <string.h>

int main (){
    char string[101];

    scanf("%s", string);

    for(int i = 0; i < strlen(string); i+=2)
        for(int j = i + 2; j < strlen(string); j+=2)
            if(string[i] > string[j]){
                int aux = string[i];
                string[i] = string[j];
                string[j] = aux;
            }
    
    printf("%s", string);
}
