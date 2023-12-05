#include <stdio.h>

void cabecalho(){
  printf("\n========================\n");
  printf("\tSENAI\n");
  printf("\n========================\n");
}

int main(){

  char nome[200];
  int idade;

  cabecalho();
  
  printf("Digite um nome: ");
  gets(nome);
  
  printf("Digite a idade: ");
  scanf("%d", &idade);

  cabecalho();
  
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);

  return 0;
}
