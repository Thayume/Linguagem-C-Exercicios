#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

//Altere o programa anterior para calcular e apresentar a média dos valores entrados e aqueles que 
//são maiores e menores que a média.

int main() {
   
    int valores[5];
    
    	setlocale(LC_ALL, "Portuguese");

   
    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }


    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += valores[i];
    }
    float media = (float)soma / 5;


    printf("\n A média dos valores é: %.2f\n", media);


    printf("\n Valores maiores que a média:\n");
    for (int i = 0; i < 5; i++) {
        if (valores[i] > media) {
            printf("%d\n", valores[i]);
        }
    }

  
    printf("\n Valores menores que a média:\n");
    for (int i = 0; i < 5; i++) {
        if (valores[i] < media) {
            printf("%d\n", valores[i]);
        }
    }

  
}

	
