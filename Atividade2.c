#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *uniao (int *v1, int n1, int *v2, int n2){
    int x, *y, i;

    x = n1 + n2;

    y =(int*)calloc(x, sizeof(int));

    for(i=0; i<n1; i++)
        y[i]=v1[i];

    for(i=0; i<(n2); i++)
        y[i+n1]=v2[i];


return y;
};

int main (){


int *v1, *v2, *v3;
int n1, n2, i;

    srand( (unsigned)time(NULL) );

    printf("QUAL O NUMERO DE ELEMENTOS DO VETOR 1: \n");
    scanf("%d", &n1);
    printf("QUAL O NUMERO DE ELEMENTOS DO VETOR 2: \n");
    scanf("%d", &n2);

    v1 = (int *) calloc (n1, sizeof(int));
    for(i=0; i<n1; i++)
        v1[i]=rand()%100;


    v2 = (int *) calloc (n2, sizeof(int));
    for(i=0; i<n2; i++)
        v2[i]=rand()%100;

    v3 = uniao(v1, n1, v2 ,n2);

    free(v1);
    free(v2);

    printf("\nVETOR UNIDO\n");
    for(i=0;i<(n1+n2); i++){
        printf("%d ", v3[i]);
    }

    return 0;
}
