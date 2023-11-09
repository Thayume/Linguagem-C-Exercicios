#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Some os elementos pares da matriz e escreva o resultado na tela


int main(){
	
int x, y, m[2][2], somapares=0;

setlocale(LC_ALL, "Portuguese");

for(x=0; x<2; x++)

for(y=0; y<2; y++){
	
	
	printf("digite os elementos da matriz [%i] [%i]", x+1, y+1);
	scanf("%i", &m[x][y]);
}


for(x=0; x<2; x++){
	
	for(y=0; y<2; y++){
		if(m[x][y]%2==0){
			somapares+=m[x][y];

      	}	
	}
		
}
	printf("a soma dos números pares da matriz são: %i", somapares);




}
