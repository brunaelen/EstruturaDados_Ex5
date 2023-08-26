#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n;
	char letra, aux;
	int vetor[5] = {'B', 'W', 'K', 'J', 'P'};
	
	for (i=0; i < 5; i++){
		for (n=0; n < 5; n++){
		if (vetor[n] > vetor[n + 1]) {
				aux = vetor[n];
				vetor[n] = vetor [n + 1];
				vetor [n + 1] = aux;
			}
		}
	}
	
	for (i = 0; i<=4; i++){
		printf ("%c \t", vetor[i]);
	}
	return 0;
}


