#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int linha, coluna;
    int x, y;

    printf("Numero de linhas: \n");
    scanf("%d", &linha);

    srand( (unsigned)time(NULL) );

    for(x = 0; x < linha; x++){
        printf("Numero de colunas em cada linha: \n");
        scanf("%d", &coluna);
        y = coluna;
        for(y = 0; y < coluna; y++){
            int MatrizM[x][y];
            MatrizM[x][y] = rand()%10;
        }
    }



    for(linha = 0; linha < x; linha++){
        for(coluna = 0; coluna < y; coluna++){
            int MatrizM[x][y];
            printf("%d\n", MatrizM[x][y]);

        }
    }

}
