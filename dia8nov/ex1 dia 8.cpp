#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

// Escreva um algoritmo que lê uma matriz M[5,5] e ao final substitua todos os valoresnegativos 
//da matriz pelo seu valor positivo. Exemplo: substitua -2 por 2, -16 por 16,assim por diante

int main(){
	
int x, y, m[3][3];

setlocale(LC_ALL, "Portuguese");

for (x=0; x<3; x++){
	for  (y=0; y<3; y++){
		
printf("elemento[%i][%i]=", x+1, y+1);
scanf("%i", &m[x][y]);		
}
}

printf("valores convertidos para positivo  \n");

for (x=0; x<3; x++){
	for  (y=0; y<3; y++){
	
		if(m[x][y]<0){
		m[x][y]= m[x][y] * -1;
		}

	}	
		printf("%i", m[x][y]);
}















}


