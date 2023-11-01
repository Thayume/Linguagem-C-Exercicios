#include <stdlib.h>

#include <locale.h>

//Fazer um algoritmo que seja lido uma palavra e imprima a quantidade de vogais que compõe a palavra.

int main(){
	
char p[20];
int vogais=0, cont;


setlocale(LC_ALL, "Portuguese");

printf("digite uma palavra \n");
gets(p);


for (cont=0; cont< p[cont]; cont++ ){
	if (p[cont]== 'A'|| p[cont]== 'a'|| p[cont]== 'E'||p[cont]== 'e' ||p[cont]== 'i'||
	p[cont]== 'I' ||p[cont]== 'o' ||p[cont]== 'O' ||p[cont]== 'u' ||p[cont]== 'U' ){
	
vogais++;
}
}
printf("a quantidade de vogais � de %i", vogais);
}





