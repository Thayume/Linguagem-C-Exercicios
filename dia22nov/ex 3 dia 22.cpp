#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Fa�a um programa que leia 5 n�meros inteiros, armazene-os em um vetor, solicite um valor de refer�ncia inteiro e: 

//a) imprima os n�meros do vetor que s�o maiores que o valor refer�ncia 

//b) retorne quantos n�meros armazenados no vetor s�o menores que o valor de refer�ncia 

//c) retorne quantas vezes o valor de refer�ncia aparece no vetor

int main() {

	int i, soma=0, v[5], media;
	
		setlocale(LC_ALL, "Portuguese");
	
    int valores[5];


    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int valorReferencia;
    printf("Digite um valor de refer�ncia inteiro: ");
    scanf("%d", &valorReferencia);


    printf("\nN�meros do vetor maiores que o valor de refer�ncia:\n");
    for (int i = 0; i < 5; i++) {
        if (valores[i] > valorReferencia) {
            printf("%d\n", valores[i]);
        }
    }

    int menoresQueReferencia = 0;
    for (int i = 0; i < 5; i++) {
        if (valores[i] < valorReferencia) {
            menoresQueReferencia++;
        }
    }
    printf("\nQuantidade de n�meros menores que o valor de refer�ncia: %d\n", menoresQueReferencia);

 
    int vezesReferencia = 0;
    for (int i = 0; i < 5; i++) {
        if (valores[i] == valorReferencia) {
            vezesReferencia++;
        }
    }
    printf("\nQuantidade de vezes que o valor de refer�ncia aparece no vetor: %d\n", vezesReferencia);

    return 0;
}

	
	
	
	
		
		

