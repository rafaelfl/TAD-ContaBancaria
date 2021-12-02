#include <stdio.h>
#include "Carteira.h"

int main(void) {
  Carteira *carteira;

  carteira = criar_carteira();

  ContaBancaria *conta1;
  ContaBancaria *conta2;

  conta1 = inicializar_conta(1000, 20.0);
  conta2 = inicializar_conta(2000, 30000.0);

  adicionar_conta(carteira, conta1);
  adicionar_conta(carteira, conta2);

  imprimir_saldo(conta1);
  imprimir_saldo(conta2);

  depositar(conta1, 10.0);
  depositar(conta2, 30000.0);

  sacar(conta1, 5.0);
  sacar(conta2, 1000.0);

  transferencia(conta2, conta1, 1000);

  imprimir_saldo(conta1);
  imprimir_saldo(conta2);


  imprimir_carteira(carteira);

  destruir_conta(conta1);
  destruir_conta(conta2);

  destruir_carteira(carteira);

  return 0;
}
