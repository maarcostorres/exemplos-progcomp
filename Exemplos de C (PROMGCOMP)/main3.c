/*
EXEMPLO 3: MINI CALCULADORA DE INTEIROS
Escrever um algoritmo que leia dois (2) números inteiros: N1 e N2 e
exibir na tela as seguintes operações aritméticas:
  -> SOMA: +
  -> SUBTRAÇÃO: -
  -> MULTIPLICAÇÃO: *
  -> DIVISÃO: /
  -> DIV (QUOCIENTE INTEIRO): /
  -> MOD (RESTO INTEIRO): %
*/
#include <stdio.h> // SAÍDA: PRINTF + LER: SCANF

// ALGORITMO: ENTRADA + ULA + SAÍDA
int main(void) {
  // ENTRADA:
  int N1, N2;
  printf("N1: "); scanf("%i", &N1);
  printf("N2: "); scanf("%i", &N2);

  // PROCESSAMENTO: ULA + SAÍDA
  printf("SOMA                   : N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
  printf("SUBTRAÇÃO              : N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
  printf("MULTIPLICAÇÃO          : N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
  printf("DIVISÃO                : N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
  printf("DIV (QUOCIENTE INTEIRO): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
  printf("MOD (RESTO INTEIRO)    : N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
  return 0;
}