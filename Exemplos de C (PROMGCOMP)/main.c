#include <stdio.h>

int main(void) {
  int idade = 20;
  float temperatura = 22.3;
  printf("MEUS DADOS: \n\n");    // \n: pular uma (1) linha
  printf("Minha idade: %i anos.\n", idade);
  printf("temperatura do laboratório: %.1f º Celsius.\n", temperatura);
  return 0;
}