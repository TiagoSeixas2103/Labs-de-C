// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int checa_maior_indice(int col1, int col2, int col3, int col4, int mi, int j) {
    int checando;
    int novo_maior_indice;

    if (col1 > col2 && col1>col3 && col1 > col4) {
        novo_maior_indice = j;
    } else {
        novo_maior_indice = mi;
    }

    return novo_maior_indice;
}

int main(int argc, char *argv[]) {

	long mat[5][4];
	int i,j;

	for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
		scanf("%ld", &mat[i][j]);
        printf("i: %d, j: %d, matriz[i][j]: %ld\n", i, j, mat[i][j]);
		}
	}
    int coluna1 = 0;
    int coluna2 = 0;
    int coluna3 = 0;
    int coluna4 = 0;
    int maior_indice = 0;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            if (j== 0) {
                coluna1 += mat[i][j];
                maior_indice = checa_maior_indice(coluna1, coluna2, coluna3, coluna4, maior_indice, j);
                
            } else if (j== 1) {
                coluna2 += mat[i][j];
                maior_indice = checa_maior_indice(coluna2, coluna1, coluna3, coluna4, maior_indice, j);
            } else if (j== 2) {
                coluna3 += mat[i][j];
                maior_indice = checa_maior_indice(coluna3, coluna2, coluna1, coluna4, maior_indice, j);
            } else {
                coluna4 += mat[i][j];
                maior_indice = checa_maior_indice(coluna4, coluna2, coluna3, coluna1, maior_indice, j);
            }		}
	}
    printf("coluna1: %d\n", coluna1);
    printf("coluna2: %d\n", coluna2);
    printf("coluna3: %d\n", coluna3);
    printf("coluna4: %d\n", coluna4);
    printf("maior indice: %d\n", maior_indice);

    
	return 0;
}
