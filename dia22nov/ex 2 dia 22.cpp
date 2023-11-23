#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Altere o programa anterior para calcular e apresentar a média dos valores entrados e aqueles que 
//são maiores e menores que a média.

int main() {

	int i, soma=0, v[5], media;
	
		setlocale(LC_ALL, "Portuguese");
		
for (i=0; i<5; i++){
		printf("digite o valor %i \n", i+1);
		scanf("%i", &v[i]);
	}
	 
	
   
	for (i=0; i<5; i++){
		soma += v[i]; 
	}
	
	 printf("a média dos valores é de: %i \n", soma/5);
	





	for (i=0; i<5; i++){
		
			 
		if(v[i] < (soma/5)){
		}else{ printf("erro");	
}}

	printf("\n");
	
	
	for (i=0; i<5; i++){
		
			
			if(v[i] > (soma/5)){	
			printf( "os valores menores que a média são: %d \n", soma );
			} else{ printf("erro");
				 }	
}
		
		
		
	
}
