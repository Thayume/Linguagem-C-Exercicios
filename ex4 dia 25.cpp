#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for, multiplica cada elemento por 5 e imprime o resultado.

int main(){
	
int x, y, m[3][3];

setlocale(LC_ALL, "Portuguese");

//captura os elementos
for (x=0; x<3;x++)

for(y=0; y<3;y++) {
	printf("elemento [%i][%i]= \n", x+1, y+1);
	scanf("%i", &m[x][y]);
}


//exibir valores originais

printf("\n ---valores originais---- \n");

for (x=0; x<3;x++){
for(y=0; y<3;y++) 
printf("%i", m[x][y]);
printf("\n");
}


//mult por 5

for (x=0; x<3;x++){
for(y=0; y<3;y++) 
 m[x][y]= m[x][y]*5;
 }


printf("\n ---valores multiplicados por 5 ---- \n");

for (x=0; x<3;x++){
for(y=0; y<3;y++) 

printf("%i", m[x][y]);
printf("\n");
}








}

