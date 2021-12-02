#include <stdio.h>
#include <stdlib.h>
#include "ContaBancaria.h"

ContaBancaria * inicializar_conta(int nr, double saldo_inicial) {
  ContaBancaria *conta;

  conta = malloc(sizeof(ContaBancaria));
  
  conta->numero = nr;
  conta->saldo = saldo_inicial;

  return conta;
}

void depositar(ContaBancaria *conta, double valor) {
  conta->saldo += valor;
}

void sacar(ContaBancaria *conta, double valor) {
  conta->saldo -= valor;
}

void transferencia(ContaBancaria *conta1, ContaBancaria *conta2, double valor) {
  conta1->saldo -= valor;
  conta2->saldo += valor;
}

void imprimir_saldo(ContaBancaria *conta) {
  printf("O saldo da conta %d é: %.2f\n", conta->numero, conta->saldo);
}

void destruir_conta(ContaBancaria *conta) {
  free(conta);
}