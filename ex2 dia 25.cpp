#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.



int main(){
	
char p, v[3][30];//3 significa que tenho 3 elementos e o 30 significa que posso digitar até 30 carcteres

setlocale(LC_ALL, "Portuguese");

for (p=0; p<3;p++){
	printf("Digite a [%i]° palavra \n", p+1);
	gets(v[p]);
}

printf("\n --palavras na ordem contrária-- \n");
for	(p<3;p>=0;p--){
printf("%s \n", v[p] );

}


}

