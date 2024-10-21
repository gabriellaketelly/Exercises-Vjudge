#include <stdio.h>
int main(){
    double tamanho, numero;
    double positivos = 0, negativos = 0, nulos = 0;

    scanf("%lf", &tamanho);

    for(int i = 0; i < tamanho; i++){
        scanf("%lf", &numero);
        if(numero > 0)
            positivos++;
        else if (numero < 0)
            negativos++;
        else
            nulos++;
    }

    printf("%.6lf\n%.6lf\n%.6lf\n", positivos/tamanho, negativos/tamanho, nulos/tamanho);

    return 0;
    
}
