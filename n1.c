/*1) Crie um programa que l� 50 n�meros inteiros fornecidos pelo usu�rio e organiza em 2 vetores da seguinte forma: 
Primeiro um vetor chamado pares armazena apenas n�meros pares e um vetor chamado impares que armazena apenas n�meros impares. 
Ao final do programa, informe se existem mais n�meros pares do que impares.*/

#include<stdio.h>

int main(){
	
	float vetP[5], vetI[5];
	int i, par=0, impar=0, valor;
	
	for(i=0;i<5;i++){
		printf("Insira um numero real: ");
		scanf("%d", &valor);
		if(valor%2==0){
			vetP[par]=valor;
			par++;
		}
		else if(valor%2!=0){
			vetI[impar]=valor;
			impar++;
		}
	}
	
	if(par>impar){
		printf("Existem mais numeros pares!");
	}
	else if(impar>par){
		printf("Existem mais numero impares!");
	}

	return 0;
}
