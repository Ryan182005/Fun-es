#include <stdio.h>
#include <stdlib.h>


void limpa_tela(){
  fflush(stdin);
  system("cls || clear");
}
void cabecalho(){
  printf("\n========================\n");
  printf("\tSENAI");
  printf("\n========================\n");
}
void mostrarDados(char goat[200], int lenda){
  printf("Nome: %s\n", goat);
  printf("Idade: %d \n", lenda);
}
int main(){


  char nome[200];
  int idade;

  cabecalho();
  
  printf("Digite um nome: ");
  gets(nome);
  
  printf("Digite a idade: ");
  scanf("%d", &idade);
  limpa_tela();
  
  cabecalho();

  mostrarDados(nome, idade);
  

  return 0;

  return 0;
}