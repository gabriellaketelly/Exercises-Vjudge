#include <stdio.h>
#include <string.h>

int main(){
    char string[100001];
    int number_of_words = 1;

    scanf("%s", string);

    for(int i = 0; i < strlen(string); i++)
        if(string[i] >= 'A' && string[i] <= 'Z')
            number_of_words++;
    
    printf("%d", number_of_words);

    return 0;
}
