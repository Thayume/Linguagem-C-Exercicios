#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e imprimiroutra matriz multiplicando
// cada elemento da primeira matriz por 2


int main(){
	

int x, y, m[3][3];

setlocale(LC_ALL, "Portuguese");

for (x=0; x<3; x++){
	for  (y=0; y<3; y++){
		
printf("elemento[%i][%i]=", x+1, y+1);
scanf("%i", &m[x][y]);		
}
}

printf("valores multiplicados por 2  \n");

for (x=0; x<3; x++){
	for  (y=0; y<3; y++){
	
if(m[x][y]>0){
	m[x][y]= m[x][y] * 2;
}	
		printf("%i  ", m[x][y]);
		}
		printf("\n \n");

}

}

