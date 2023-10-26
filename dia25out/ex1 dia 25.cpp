#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main(){
	
int i, v[6];

setlocale(LC_ALL, "Portuguese");

for (i=0; i<6;i++){
	printf("elementos[%i]", i+1);
	scanf("%i", &v[i]);
}


for	(i=0;i<6;i++){
	v[i]=v[i]*6;
}

printf("\n --valores digitados-- \n");


for(i=0;i<6;i++){

printf("%i \n", v[i] );
}


}
	
