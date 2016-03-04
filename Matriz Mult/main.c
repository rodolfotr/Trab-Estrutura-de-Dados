#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand( (unsigned)time(NULL) );

    int linhas, i, j;

    printf("Quantas linhas: \n");
    scanf("%d", &linhas);

    int colunas[linhas];

    int **MatrizM = malloc(linhas * sizeof(int*));

    for (i=0; i<linhas; i++){
        printf("Quantas colunas: \n");
        scanf("%d", &colunas[i]);
        MatrizM[i]= malloc(colunas[i] * sizeof(int));
        for (j=0; j<colunas[i]; j++){
            MatrizM[i][j]= rand()%20;

        }
    }
    for (i=0; i<linhas; i++){
        printf("\n");
        printf("%d   ", MatrizM[i]);
        for (j=0; j<colunas[i]; j++){
            printf("%d ", MatrizM[i][j]);
        }
    }
}

