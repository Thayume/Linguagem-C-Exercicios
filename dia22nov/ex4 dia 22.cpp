#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Fa�a um programa para ler um vetor de 10 n�meros inteiros, calcule e 
//imprima a m�dia aritm�tica de seus elementos., em seguida atualize seu valor com
// o dobro do valor anterior, e imprima o vetor atualizado.

int main() {

	int i;
	
		setlocale(LC_ALL, "Portuguese");

 
    int vetor[10];

  
    printf("Digite 10 n�meros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    float media = (float)soma / 10;

    printf("\nA m�dia aritm�tica dos elementos �: %.2f\n", media);

   
    for (int i = 0; i < 10; i++) {
        vetor[i] *= 2;
    }

    printf("\n n�meors atualizados com o dobro do valor anterior:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }










}
