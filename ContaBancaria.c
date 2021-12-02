#include <stdio.h>
#include "ContaBancaria.h"

void inicializar_conta(ContaBancaria *conta, int nr, double saldo_inicial) {
  conta->numero = nr;
  conta->saldo = saldo_inicial;
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