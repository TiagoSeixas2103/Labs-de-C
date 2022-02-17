// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

void faz_media(long array[], int tamanho) {
    int j;
    int contador = 0;
    int valor = 0;

    for(j = 0; j<tamanho; j++) {
        valor += array[j];
        contador++;
	}

    double media = valor/contador;
    printf("Média: %f\n", media);


}

int main(int argc, char *argv[]) {
    int i;
	int n;
    scanf("Digite número de elementos: %d\n", &n);
    long arr[n];

    for(i = 0; i < n; i++) { 
    scanf("%ld", &arr[i]);
    printf("i: %d, array[i]: %ld\n", i, arr[i]);
	}

    faz_media(arr,n);

    
	return 0;
}
