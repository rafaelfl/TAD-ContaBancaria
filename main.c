#include <stdio.h>
#include "ContaBancaria.h"

int main(void) {
  ContaBancaria conta1;
  ContaBancaria conta2;

  inicializar_conta(&conta1, 1000, 20.0);
  inicializar_conta(&conta2, 2000, 30000.0);

  imprimir_saldo(&conta1);
  imprimir_saldo(&conta2);

  depositar(&conta1, 10.0);
  depositar(&conta2, 30000.0);

  sacar(&conta1, 5.0);
  sacar(&conta2, 1000.0);

  transferencia(&conta2, &conta1, 1000);

  imprimir_saldo(&conta1);
  imprimir_saldo(&conta2);

  return 0;
}
