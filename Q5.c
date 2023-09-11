#include <stdio.h>

int main(void) {
    int idade, peso, contador_peso_altura = 0, contador_idade = 0, contador_altura = 0;
    float altura, media_idade, perct;
    int n = 1;

    media_idade = 0;
      
    while (n <= 5) {
        printf("Digite sua idade, seu peso e sua altura (separados por espaços): ");
        scanf("%d %d %f", &idade, &peso, &altura);
        printf("Idade: %d, Peso: %d, Altura: %.2f\n", idade, peso, altura);
        media_idade = idade + media_idade;
        if (peso > 80 && altura < 1.5) {
            contador_peso_altura++;
        }
        if (idade > 10 && idade < 30) {
            contador_idade++;
        }
        if (altura > 1.9) {
            contador_altura++;
        }

        n++;
    }
    media_idade = media_idade / 10;
    printf("A média das idades apresentadas é: %.2f\n", media_idade);
    printf("A quantidade de pessoas com peso superior a 80kg e altura inferior a 1,5m: %d\n", contador_peso_altura);
    
    if (contador_altura > 0) {
        perct = (contador_idade / (float)contador_altura) * 100; 
        printf("A porcentagem de pessoas entre 10 e 30 anos entre as pessoas com mais de 1,9m de altura: %.2f\n", perct);
    } else {
        printf("Nenhuma pessoa tem altura maior que 1,9m, portanto, a porcentagem não pode ser calculada.\n");
    }

    return 0;
}
