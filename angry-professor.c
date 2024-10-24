#include <stdio.h>
int main(){
    int casos;
    int quant_alunos, limite, chegada;

    scanf("%d", &casos);

    for(int k = 0; k < casos; k++){
        scanf("%d %d", &quant_alunos, &limite);

        int pontuais = 0;
        for(int i = 0; i < quant_alunos; i++){
            scanf("%d", &chegada);
            if(chegada <= 0)
                pontuais++;
        }

        if (pontuais < limite)
            printf("YES\n");
        else 
            printf("NO\n");       

    }
}
