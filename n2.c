/*2) Em uma classe há 15 alunos, cada um dos quais realizou 3 provas com pesos distintos.
Os pesos das provas são: p1,p2,p3.
Faça um programa que lê os pesos de cada prova e as notas de cada aluno.
Calcule a média ponderada das provas para cada aluno e a média aritmética da classe em cada uma das provas.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

float nota1[2],nota2[2],nota3[2], mediaPond=0.0, mediaArit=0.0, somaAlunos=0.0, notaAri=0.0; 
int aluno[2], p1, p2, p3, i, j;

		printf("Digite o peso da prova1: ");
		scanf("%d", &p1);
		printf("Digite o peso da prova2: ");
		scanf("%d", &p2);
		printf("Digite o peso da prova3: ");
		scanf("%d", &p3);
		
	for(i=0;i<2;i++){
		printf("Digite a nota da prova1 do aluno %d: ", i);
		scanf("%f", &nota1[i]);
		printf("Digite a nota da prova2 do aluno %d: ", i);
		scanf("%f", &nota2[i]);
		printf("Digite a nota da prova3 do aluno %d: ", i);
		scanf("%f", &nota3[i]);
		
		mediaPond=((nota1[i]*p1)+(nota2[i]*p2)+(nota3[i]*p3))/(p1+p2+p3);
		
		printf("A media ponderada do aluno %d e: %.2f\n", i, mediaPond);
	}
	for(i=0;i<2;i++){
	
	somaAlunos+=nota1[i];
	notaAri=somaAlunos/2;
	printf("A media aritmetica da turma na prova1 e: %.2f\n", notaAri);
}
	for(i=0;i<2;i++){
	somaAlunos+=nota2[i];
	notaAri=somaAlunos/2;
	printf("A media aritmetica da turma na prova2 e: %.2f\n", notaAri);
	}
	for(i=0;i<2;i++){
	somaAlunos+=nota3[i];
	notaAri=somaAlunos/2;
	printf("A media aritmetica da turma na prova3 e: %.2f\n", notaAri);
	}
	
}

