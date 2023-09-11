#include <stdio.h>

int main(void) {
    int numero, numero_novo = 1, i; 
    printf("Digite um numero inteiro positivo (Caso deseje sair, digite 0)\n");
    scanf("%d", &numero);

    while (numero != 0) { 
        if (numero < 0) {
            printf("O número digitado não é válido, tente novamente:\n ");
            scanf("%d", &numero); 
        } else {
            for (i = 1; i <= numero; i++) { 
                numero_novo = numero_novo * i;
            }
            printf("O número digitado foi %d e o fatorial do mesmo é %d\n", numero, numero_novo);
        }
        printf("Digite um numero inteiro positivo (Caso deseje sair, digite 0)\n");
        scanf("%d", &numero);
        numero_novo = 1; 
    }

    printf("O programa foi encerrado\n");

    return 0; 
}
