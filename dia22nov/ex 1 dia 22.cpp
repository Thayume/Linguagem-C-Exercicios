#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores.

int main() {

	int i, soma=0, v[5];

	setlocale(LC_ALL, "Portuguese");
	

	for (i=0; i<5; i++){
		printf("digite o valor %i \n", i+1);
		scanf("%i", &v[i]);
	}
	 
	
   
	for (i=0; i<5; i++){
		soma += v[i]; //média é igual a média + valor
	}
	
	 printf("a soma dos valores é de: %i", soma);
	
	

}
