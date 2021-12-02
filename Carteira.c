#include <stdio.h>
#include <stdlib.h>

#include "Carteira.h"

Carteira * criar_carteira() {
  Carteira *carteira;

  carteira = malloc(sizeof(Carteira));

  carteira->qt = 0;

  return carteira;
}

int adicionar_conta(Carteira *carteira, ContaBancaria *conta) {
  ContaBancaria novaConta;

  novaConta.numero = conta->numero;
  novaConta.saldo = conta->saldo;

  // tem espaço disponível no vetor
  if (carteira->qt < TAM) {
    carteira->v[carteira->qt] = novaConta;
    carteira->qt++;

    return carteira->qt;
  } else {
    return -1;
  }

}

void imprimir_carteira(Carteira *carteira) {
  int i;

  printf("===========\n");
  for (i = 0; i < carteira->qt; i++) {
    printf("-- Conta nr: %d / Saldo: %.2f\n", carteira->v[i].numero, carteira->v[i].saldo);
  }
  printf("===========\n");
}

void destruir_carteira(Carteira *c) {
  free(c);
}