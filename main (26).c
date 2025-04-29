#include <stdio.h>

int main() {
    int numeros[10];
    int i, procurado, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um numero para procurar: ");
    scanf("%d", &procurado);

 
    for(i = 0; i < 10; i++) {
        if(numeros[i] == procurado) {
            printf("O numero %d foi encontrado na posicao %d (indice %d).\n", procurado, i + 1, i);
            encontrado = 1;
            break; 
        }
    }

    if(!encontrado) {
        printf("O numero %d nao foi encontrado no array.\n", procurado);
    }

    return 0;
}