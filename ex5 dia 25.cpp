#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

//Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os Nomes e quantidade de letras.

main()
{
 char nome[3][20];
 int x;
 for(x=0;x<=2;x++)
 {
 printf("\n[%d] Digite o nome : %d ",x,(x+1));
 gets(nome[x]);
 }
 for(x=0;x<=2;x++)
 {
 printf("\n %s",nome[x],x);
 printf("\t o nome %s tem %d letras",nome[x],strlen(nome[x]));
 }
 printf("\n\n");


}
