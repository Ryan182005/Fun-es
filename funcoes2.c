#include <stdio.h>
#include <locale.h>

void cabecalho(){
  printf("\n========================\n");
  printf("\tSENAI\n");
  printf("\tLógica");
  printf("\n========================\n");
}

void limpa_tela(){
  fflush(stdin);
  system("cls || clear");
}

int main(){
  setlocale(LC_ALL, "portuguese");

  char nome[200];
  int idade;

  cabecalho();
  
  printf("Digite um nome: ");
  gets(nome);
  
  printf("Digite a idade: ");
  scanf("%d", &idade);

  limpa_tela();
  cabecalho();
  
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);

  return 0;
}
