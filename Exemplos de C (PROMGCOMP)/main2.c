#include <stdio.h> 

//ALGORITIMO: ENTRADA + PROSCESSANENTO (ULA) + SAÍDA
int main(void) {
  int idade;
  float temperatura;
  printf("entre com sua idade (em anos): ");
  scanf("%i", &idade);
  printf("Entre com sua temperatura (°celsius): ");
  scanf("%f", &temperatura);
  // PROCESSAMENTO (ULA):
  printf("\nMEUS DADOS ATUAIS:\n\n");
  printf("Minha idade %i anos.\n", idade);
  printf("Minha Temperatura: %.1f °celsius.\n", temperatura);
  return 0;
} 