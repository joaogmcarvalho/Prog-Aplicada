/*2) Escreva uma fun��o para remover a primeira ocorr�ncia de um caractere de uma string.

Exemplo

Entrada

String de entrada: programar

Introduza o caractere a remover: g

Resultado
String alterada : proamar*/

#include <stdio.h>
#include <string.h>

void removeChar(char palavra[],char remove);

int main(void) {
  
  char palavra[100];
  char ch;
  printf("Digite sua string: ");
  scanf("%s",palavra);
  printf("Digite o char a remover:");
  scanf(" %c",&ch);

  removeChar(palavra,ch);

  printf("Tua string alterada e: ");
  puts(palavra);

  return 0;
}

void removeChar(char palavra[],char remove){
  int tam = strlen(palavra);
  int i, j;
  
  for(i=0;i<tam;i++){
    // se eu achei meu char a remover
    if(palavra[i] == remove){
      // fa�o todos os caracteres da frente dar um pulo para tr�s
      for(j=i;j<tam;j++){
        palavra[j] = palavra[j+1];
      }
      
    }
  }

}
