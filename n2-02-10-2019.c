#include <stdio.h>
#include <string.h>

void removeChar(char str[],char remove);

int main(void) {
  
  char str[100];
  char ch;
  printf("Digite sua string: ");
  scanf("%s",str);
  printf("Digite o char a remover:");
  scanf(" %c",&ch);

  removeChar(str,ch);

  printf("Tua string alterada e: ");
  puts(str);

  return 0;
}

void removeChar(char str[],char remove){
  int tam = strlen(str);
  int i,j;
  for(i=0;i<tam;i++){
    // se eu achei meu char a remover
    if(str[i] == remove){
      // faço todos os caracteres da frente dar um pulo para trás
      for(j=i;j<tam;j++){
        str[j] = str[j+1];
      }
      
    }
  }

}
