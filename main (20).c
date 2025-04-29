#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL,"");
    int numero, positivo, negativo, zero;
    printf("Digite o número: \n");
    scanf ("%d", &numero);
    
    if (numero > 0)
    {
        printf("O número é positivo");
    }
    else if (numero < 0)
    {
        printf("O número é negativo");
    }
    else
    {
        printf("O numero é zero");
    }
    return 0;
}
