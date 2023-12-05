#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float medias(float N1, float N2){
  float somaM;
  somaM = N1 + N2;
  return(somaM);
}
int main(){
  setlocale(LC_ALL, "portuguese");

float primeiroNumero, segundoNumero;
float media, somaM;


printf("Digite o primeiro numero: ");
scanf("%f", &primeiroNumero);
printf("Digite o segundo numero: ");
scanf("%f", &segundoNumero);

printf("\n\n\n");

somaM = medias(primeiroNumero, segundoNumero);

media = somaM / 2;

printf("Primeiro numero: %.1f\n", primeiroNumero);
printf("Segundo numero: %.1f\n", segundoNumero);
printf("Media: %.1f\n", media);
  return 0;
}