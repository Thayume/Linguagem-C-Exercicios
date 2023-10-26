#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos números são maiores que 30, Somar estes números. Somar todos os números.

int main(){
	
int vet1[8], x, cont=0, soma=0, soma2=0;

for(x=0; x<8;x++){


setlocale(LC_ALL, "Portuguese");


printf("\n digite um valor: %i \n", x+1);
scanf("%i", &vet1[x]);

if (vet1[x]>30){

cont++;
soma=soma+vet1[x];
}
soma2=soma2+vet1[x];
}
printf("os n�meros maiores que 30 s�o: %i \n", cont);
printf("a soma dos n�meros maiores que 30 �: %i  \n", soma);
printf("a soma dos n�meros digitados �: %i \n", soma2);


printf("\n\n");












}
