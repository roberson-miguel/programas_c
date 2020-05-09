#include <stdio.h>

int main(void){
    int contador;
    printf("\nDigite um numero para contagem regressiva\n\n");
    scanf("%d", &contador);
    for (contador; contador >= 1; contador--)
    {
        printf("%d ", contador);

    }
    return(0);
}
