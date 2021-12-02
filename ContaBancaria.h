/*
 * Definição da Conta Bancaria (.h)
 * Lembrando: TAD = Valores + Operações
 */

typedef struct _conta {
  int numero;
  double saldo;
} ContaBancaria;

// Operações

ContaBancaria * inicializar_conta(int nr, double saldo_inicial);
void depositar(ContaBancaria *conta, double valor);

void sacar(ContaBancaria *conta, double valor);

void transferencia(ContaBancaria *conta1, ContaBancaria *conta2, double valor);

void imprimir_saldo(ContaBancaria *conta);

void destruir_conta(ContaBancaria *conta);
