#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

//Fa�a um programa que receba uma frase e transforme todos os caracteres desta frase em mai�sculos


int main(){
	
char frase[20];

setlocale(LC_ALL, "Portuguese");


printf("Digite uma frase");

printf("\n");

gets(frase); //ao inv�s de usar o scanf (que traz apenas 1 letra de uma palavra ou frase) utilizar o gets

printf(" sua frase foi: %s \n", frase);

printf("\n");

printf("sua frase em letras ma�usculas �: %s  \n", strupr(frase));

printf("\n");





}





