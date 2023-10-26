#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa para criar um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.

int main(){
	
int i, v[5];

setlocale(LC_ALL, "Portuguese");


for (i=0; i<5;i++){
	printf("Digite a [%i]� palavra \n", i+1);
	scanf("%i", &v[i]);//considera o espa�o como continua��o
}

printf("\n --palavras na ordem contr�ria-- \n");
for	(i=4;i>=0;i--){
printf("%i \n", v[i] );

}

}

