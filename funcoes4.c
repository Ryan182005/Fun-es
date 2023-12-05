#include <stdio.h>
#include <stdlib.h>

float somar(int N1, int N2){
  int resultado;
  resultado = N1 + N2;
  return(resultado);
}
void cabecalho(){
  printf("\n========================\n");
  printf("\tSENAI");
  printf("\n========================\n");
}
int main(){

  int primeiroNumero;
  int segundoNumero;
  int soma;

  cabecalho();
  printf("Digite o primeiro numero: ");
  scanf("%d", &primeiroNumero);
  printf("Digite o segundo numero: ");
  scanf("%d", &segundoNumero);

  soma = somar(primeiroNumero, segundoNumero);

  cabecalho();
  printf("Primeiro numero: %d\n", primeiroNumero);
  printf("Segundonumero: %d\n", segundoNumero);
  printf("Soma: %d\n", soma);
  return 0;
}