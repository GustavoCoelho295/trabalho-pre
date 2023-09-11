#include <stdio.h>

int horas, minutos, tempo_novo, tempo_novo_seg;

int main(void) {
  printf("Digite o horário no seguinte formato h:m: \n ");
  scanf ("%d:%d", &horas, &minutos);
  while (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
    printf("O horário digitado está em um formato inválido, por favor, digite novamente: ");
    scanf("%d:%d", &horas, &minutos);
  }
    tempo_novo= (horas*60)+minutos;
    printf("O tempo digitado acima quando convertido em minutos é igual à %d \n", tempo_novo);
    tempo_novo_seg= tempo_novo*60;
    printf("E o tempo digitado acima quando convertido todo em segundos é igual à %d \n", tempo_novo_seg);
  
  return 0;
}