#include <stdio.h>

#include <stdlib.h>

#include <locale.h>



int main() {
	
		setlocale(LC_ALL, "Portuguese");
		
/*//Fa�a um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores.

int valores[5];
int i;
float soma=0;

for (i=0; i<5 ; i++){
	printf("digite um valor: %i \n", i+1);
	scanf("%i", &valores[i]);
	
}


printf("seus valores s�o:\n");
for (i=0; i<5 ; i++){
	printf("%i\n", valores[i]);
	soma+=valores[i];
	
}



printf("a soma de todos os valores � de: %f\n", soma);


//Altere o programa anterior para calcular e apresentar a m�dia dos valores entrados e aqueles que 
//s�o maiores e menores que a m�dia.


int valores[5];
int i;
float soma=0, media= 0;

for (i=0; i<5 ; i++){
	printf("digite um valor: %i \n", i+1);
	scanf("%i", &valores[i]);
	
}


printf("seus valores s�o:\n");
for (i=0; i<5 ; i++){
	printf("%i\t", valores[i]);
	soma+=valores[i];
	
}

media=(soma/5);

printf("\na m�dia deles �:%.2f\n", media);


printf("seus valores menores que a m�dia s�o:\n");
for (i=0; i<5 ; i++){
	if(valores[i]< media){
		printf("%i\n", valores[i]);
	}

}

printf("seus valores maiores que a m�dia s�o:\n");
for (i=0; i<5 ; i++){
	if(valores[i]> media){
		printf("%i\n", valores[i]);
	}


}






//Fa�a um programa que leia 5 n�meros inteiros, armazene-os em um vetor, solicite um valor de refer�ncia inteiro e: 

//a) imprima os n�meros do vetor que s�o maiores que o valor refer�ncia 

//b) retorne quantos n�meros armazenados no vetor s�o menores que o valor de refer�ncia 

//c) retorne quantas vezes o valor de refer�ncia aparece no vetor


int num[5], ref, n;

int menor=0,quant=0;

for (n=0; n<5; n++){
	printf("Digite o valor %i\n",n+1);
    scanf("%i",&num[n]);
    
}

printf("seus n�meros s�o:\t");
for (n=0; n<5; n++){
	printf("%i\t",num[n]);
	
}

printf("\ndigite um valor de referencia\n");
scanf("%i", &ref);

	printf("os valores maiores que n�mero de refer�ncia s�o: \n");
for (n=0; n<5; n++){
	if(num[n]>ref){
		printf("%i\n", num[n]);
	}		
}

	
	
	printf("\n");

for (n=0; n<5; n++){
	if(num[n]<ref){
		menor++;
		
	}		
}
	printf("\nos valores menores que n�mero de refer�ncia s�o: %i n�meoro(s)\n", menor);
	
	printf("\n");

for (n=0; n<5; n++){
	if(num[n]==ref){
		quant++;
		
	}		
}
	 printf("\nquantas vezes o valor de refer�ncia aparece no vetor: %i vezes\n", quant);
	 
	 

	 
	 
	 
	 
//Fa�a um programa para ler um vetor de 10 n�meros inteiros, calcule e 
//imprima a m�dia aritm�tica de seus elementos., em seguida atualize seu valor com
// o dobro do valor anterior, e imprima o vetor atualizado.
 
	 
int vetor[10], nv, m, soma=0;




for(nv=0;nv<10; nv++){
	printf("digite o n�mero %i\n", nv+1);
	scanf("%i", &vetor[nv]);
	soma+=vetor[nv];
}

m=(soma/10);

printf("A M�dia dos n�meros � de %i\n", m);

	printf("n�meoros escolhidos anteriormente, mas com o dobro do valor:\n");
 
for(nv=0;nv<10; nv++){
	vetor[nv]*=2;
}	 
	 
	 
for(nv=0;nv<10; nv++){
	printf("%i \t", vetor[nv]);
}	 
		 
*/	 	 
	 
	 //Fa�a um programa em que o usu�rio dever� digitar uma nota para 3 alunos em 4 disciplinas diferentes e, em seguida, calcula e exibe as m�dias
	 // por aluno e por disciplina. 
	 
	 
	 
	 int notas[3][4], aluno, disc;
	 
	 for (aluno=0; aluno<3; aluno++){
	 	printf("digite as notas do aluno n�meoro %i\n", aluno+1);
	 		 for (disc=0; disc<4; disc++){
	 			printf("notas da disciplina %i\n", disc+1);
	 
	 	scanf ("%i", &notas[aluno][disc]);
	 	
	 	}
	 }
	 
	 printf("\nmedia por aluno:\n");
	 for (aluno=0; aluno<3; aluno++){
	 	float medalu=0;
	 
	 		 for (disc=0; disc<4; disc++){
	 		medalu+=notas[aluno][disc];
	 	}
	 		 medalu/=disc;
	 		 printf("media aluno %i: %.2f\n", aluno+1, medalu); 
	 }
	 

	 printf("\nmedia por disciplina:\n");
	 for (disc=0; disc<4; disc++){
	
	 	float meddisc=0;
	 
	 		for (aluno=0; aluno<3; aluno++){
	 		meddisc+=notas[aluno][disc];
	 	}
	 		 meddisc/=aluno;
	 		 printf("media aluno %i: %.2f\n", disc+1, meddisc); 
	 }
	 
	 
	 
	 
	 
	 
	 
}
