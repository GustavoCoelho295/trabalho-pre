#include <stdio.h>
#include <stdlib.h>
int num1,num2,num3,func;
int maior,menor,meio;

int main() {

    printf("Digite 3 números inteiros positivos(a,b,c)\n");
    scanf("%d,%d,%d", &num1,&num2,&num3);

    printf("1 - mostre os numeros em ordem crescente\n");
    printf("2 - mostre os numeros em ordem decrescente\n");
    printf("3 - mostre o menor numero entre os demais\n");
    printf("Qual das funções acima você deseja utilizar?\n");
    scanf("%d", &func);

    if (func == 1) {
        if(num1>num2 && num1>num3) {
             maior = num1;

             if (num2>num3) {
                 menor = num3;
                 meio = num2;
             } else {
                 meio=num3;
                 menor = num2;
             }
        printf("%d,%d,%d",menor,meio,maior);
        }
        if (num2>num1 && num2>num3) {
              maior = num2;
             if (num1>num3) {
                 menor = num3;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num3;
             }
        printf("%d,%d,%d", menor,meio,maior);
        }
        if (num3>num1 && num3>num2) {
              maior = num3;
             if (num1>num2) {
                 menor = num2;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num2;
             }
        printf("%d,%d,%d", menor,meio,maior);
        }
    
    }  else if (func == 2) {
        if(num1>num2 && num1>num3) {
             maior = num1;

             if (num2>num3) {
                 menor = num3;
                 meio = num2;
             } else {
                 meio=num3;
                 menor = num2;
             }
        printf("%d,%d,%d", maior,meio,menor);
        }
        if (num2>num1 && num2>num3) {
              maior = num2;
             if (num1>num3) {
                 menor = num3;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num3;
             }
        printf("%d,%d,%d", maior,meio,menor);
        }
        if (num3>num1 && num3>num2) {
              maior = num3;
             if (num1>num2) {
                 menor = num2;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num2;
             }
        printf("%d,%d,%d", maior,meio,menor);
        }  
    } else if (func == 3) {
        if(num1>num2 && num1>num3) {
             maior = num1;

             if (num2>num3) {
                 menor = num3;
                 meio = num2;
             } else {
                 meio=num3;
                 menor = num2;
             }
        printf("%d,%d,%d", maior,menor,meio);
        }
        if (num2>num1 && num2>num3) {
              maior = num2;
             if (num1>num3) {
                 menor = num3;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num3;
             }
        printf("%d,%d,%d", maior,menor,meio);
        }
        if (num3>num1 && num3>num2) {
              maior = num3;
             if (num1>num2) {
                 menor = num2;
                 meio = num1;
             } else {
                 menor = num1;
                 meio = num2;
             }
        printf("%d,%d,%d", maior,menor,meio);
        }  
    }
  
    return 0;
}