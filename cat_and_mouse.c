#include <stdio.h>
#include <stdlib.h>

int main(){
    int consultas;
    int catA, catB, mouseC;

    scanf("%d", &consultas);

    for(int i = 0; i < consultas; i++){
        scanf("%d %d %d", &catA, &catB, &mouseC);
        int distA = abs(catA-mouseC);
        int distB = abs(catB-mouseC);

        if(distA < distB)
            printf("Cat A\n");
        else if(distA > distB)
            printf("Cat B\n");
        else 
            printf("Mouse C\n");
    }

    return 0;
}
