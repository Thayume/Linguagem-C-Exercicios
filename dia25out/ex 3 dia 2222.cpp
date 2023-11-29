#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa que leia 5 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 

//a) imprima os números do vetor que são maiores que o valor referência 

//b) retorne quantos números armazenados no vetor são menores que o valor de referência 

//c) retorne quantas vezes o valor de referência aparece no vetor

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
    printf("Digite um valor de referência inteiro: ");
    scanf("%d", &valorReferencia);


    printf("\nNúmeros do vetor maiores que o valor de referência:\n");
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
    printf("\nQuantidade de números menores que o valor de referência: %d\n", menoresQueReferencia);

 
    int vezesReferencia = 0;
    for (int i = 0; i < 5; i++) {
        if (valores[i] == valorReferencia) {
            vezesReferencia++;
        }
    }
    printf("\nQuantidade de vezes que o valor de referência aparece no vetor: %d\n", vezesReferencia);

    return 0;
}

	
	
	
	
		
		

