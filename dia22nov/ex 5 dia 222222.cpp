#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Fa�a um programa em que o usu�rio dever� digitar uma nota para 3 alunos em 4 disciplinas diferentes e, em seguida, calcula e exibe as m�dias por aluno e por disciplina. 



































int main() {

	int n[3][4];
	
		setlocale(LC_ALL, "Portuguese");

    int alunos = 3;
    int disciplinas = 4;
    float notas[3][4]; 

 
    for (int i = 0; i < alunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < disciplinas; j++) {
            printf("Nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }


    printf("\nM�dias por aluno:\n");
    for (int i = 0; i < alunos; i++) {
        float mediaAluno = 0;
        for (int j = 0; j < disciplinas; j++) {
            mediaAluno += notas[i][j];
        }
        mediaAluno /= disciplinas;
        printf("M�dia do aluno %d: %.2f\n", i + 1, mediaAluno);
    }

 
    printf("\nM�dias por disciplina:\n");
    for (int j = 0; j < disciplinas; j++) {
        float mediaDisciplina = 0;
        for (int i = 0; i < alunos; i++) {
            mediaDisciplina += notas[i][j];
        }
        mediaDisciplina /= alunos;
        printf("M�dia da disciplina %d: %.2f\n", j + 1, mediaDisciplina);
    }













}
