#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa para ler um vetor de 10 números inteiros, calcule e 
//imprima a média aritmética de seus elementos., em seguida atualize seu valor com
// o dobro do valor anterior, e imprima o vetor atualizado.

int main() {

	int i;
	
		setlocale(LC_ALL, "Portuguese");

    // Declaração do vetor para armazenar os valores
    int vetor[10];

    // Leitura dos valores
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Cálculo e impressão da média aritmética
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    float media = (float)soma / 10;

    printf("\nA média aritmética dos elementos é: %.2f\n", media);

    // Atualização do vetor com o dobro do valor anterior
    for (int i = 0; i < 10; i++) {
        vetor[i] *= 2;
    }

    // Impressão do vetor atualizado
    printf("\n númeors atualizados com o dobro do valor anterior:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }










}
