#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
/*	printf("Hello wold! \n");
	printf("Hello wold! \t \t");
	printf("Hello wold! \t");
	printf("Hello wold! \t Ol� \t  \ntudo bem \t como vai \t");
	printf("Hello wold! \n");
	printf("valor real com apenas duas casas %.2f \n", 3.146723672);
	printf("dado de texto %c.\n", 'a');// aspas simples � quando � um �nico caracter
	printf("dado de texto %s \n \n \n ", "testando");
	
	// aula 3.2
	
	int dado = 10;
	
	printf("dado antes do incremento: %d \n", dado);
	
	dado++; // vira 11
	printf("depois do incremento: %d \n", dado);
	
	dado--;  // 11 - 1 vai ser 10 novamente
	printf("depois do incremento: %d \n", dado);
	
	dado +=3;  // 10 + 3 = 13
	printf("depois do incremento: %d \n", dado);
	
		dado -=2;  // 13 - 2 = 11
	printf("depois do incremento: %d \n", dado);
	
		dado *= 10;  // 111 * 10 = 110
	printf("depois do incremento: %d \n \n \n", dado);
	
	
	//aula 4.1
	
	float m;
	
	printf("insira a nota: \n");
	scanf ("%f", &m);
	
	if(m >= 7.0){
		printf("aprovado! \n");
	}else{
		printf("reprovado \n");
	}
	
	printf("-------------------------- \n");
	
	float n;
	
	
	printf("insira a nota: \n");
	scanf ("%f", &n);
	
	if(n >= 4.0 && n < 7.0){
		printf("Voc� tem direito a exame! \n");
	}else{
		printf("Voc� n�o tem direito a exame!");
	}
	

	
	int d; 
	
	printf("insira um v�lor de 1 a 7 \n");
	scanf("%i", &d);
	
	switch(d){
		case 1:
			printf("domingo \n");
			
			break;
			
		case 2:
			printf("segunda-feira \n");
			
			break;
			
		case 3:
			printf("ter�a-feira \n");
			
			break;
			
		case 4:
			printf("quarta-feira \n");	
			
			break;
			
		case 5:
			printf("quinta-feira \n");
			
			break;
			
		case 6:
			printf("sexta-feira \n");
			
			break;
			
		case 7:
			printf("sabado \n");
			
			break;
			
		default:
			printf("valor inv�lido");
			break;
			
			
			
			
			
	int w=1;
	
	while (w <= 10){
		printf("%i \n", w);
		w++;
	}		
			
		
			
	
	int d=11;
	
	do{
		printf("%d \n", d);
		d++;
	}while(d <=10); // faz com que o while seja executado por ultimo, gerando um looping se ainda 
	//n�o atendeu o esperado, fazendo com que o bloco de comando seja executado pelo menos 1 vez
			
			
	
	
	
	int f;
	
	for(f=1; f<=10; f++){// in�cio, teste, incremento
		printf("%d \n", f);
	}
	
		
	
	
	int b;
	
	for(b=1; b<=10; b++){
		printf("%d \n", b);
		
		if(b==5){
			break;//vai quebrar o la�o n�o importa se ainda tinha linha para rodar
		}
		
	}
	
	
	int c;
	
	for(c=1; c<=10; c++){
		
		
		if(c==5){
			continue;// ignora o 5 e pulou ele 
		}
		
		printf("%d \n", c);
	}
	
	*/	
	
	
    int vetor[5];
	int i;
	
	float s =0;
	
	for(i=0; i<5; i++ ){// i come�a em 0, enquanto i for menor do que 5, vai saltar de 1 em 1 posi��o
		printf("digite o dano n� %i \n ", i+1);
		scanf("%i",&vetor[i]);
		s+= vetor[i];//variavel s soma ela mesma com o pr�ximo valor
	}
	
		printf("dados inseridos:\n " );
		for(i=0; i<5; i++ ){
			printf("%i\n",vetor[i]);
	}
		
	
	printf("resultado da m�dia dos n�meors: %f \n", s/5);

	
	
	
	
	
	

}
