
#include <math.h>
#include <stdio.h>

int num, num_qua, num_cubo;
float resto_div, raiz_qua, raiz_cubica;

int main(void) {
  printf("Digite um número: ");
  scanf("%d", &num);

  if (num <= 0) {
    while (num <= 0) {
      printf("Digite um número válido: ");
      scanf("%d", &num);
    }
  }

  num_qua = pow(num,2.00/1.00);
  num_cubo = pow(num, 3.00/1.00);

  raiz_qua = pow(num, 1.0 / 2.0);
  raiz_cubica = pow(num, 1.0 / 3.0);

  resto_div = num % 3;

  printf("O número ao quadrado é %d\n", num_qua);
  printf("O número ao cubo é %d\n", num_cubo);
  printf("A raiz quadrada do número digitado é %.2lf\n", raiz_qua);
  printf("A raiz cúbica do número digitado é %.2lf\n", raiz_cubica);
  printf("O resto da divisão por 3 é %.2lf\n", resto_div);

  return 0;
}