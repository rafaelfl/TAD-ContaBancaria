
#include "ContaBancaria.h"

#define TAM 100

typedef struct _carteira {
  ContaBancaria v[TAM];
  int qt;
} Carteira;

Carteira * criar_carteira();

int adicionar_conta(Carteira *carteira, ContaBancaria *conta);

void imprimir_carteira(Carteira *carteira);

void destruir_carteira(Carteira *c);