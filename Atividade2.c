#include <stdio.h>
#include <stdlib.h>



int* uniao( int *v1, int n1, int *v2, int n2){
    int x, *y, i;
    
    x= n1 + n2;
    
    y=(int*)calloc(x * sizeof(int));
    
    for(i=0; i<n1; i++){
    y[i]=v1[i];
}
    for(i=0; i<n2; i++){
    y[i+n1]=v2[i];
}

return y;
}

int main (){


int *v1, *v2, *v3;
int n1, n2, i, j, k;

printf("QUAL O NUMERO DE ELEMENTOS DO VETOR 1: \n");
scanf("%d", &n1);
printf("QUAL O NUMERO DE ELEMENTOS DO VETOR 2: \n");
scanf("%d", &n2);

v1 = (int *) calloc (n1 * sizeof(int));
v2 = (int *) calloc (n2 * sizeof(int));

for(i=0; i<n1; i++){
    v1[i]=rand()%100;
}
for(i=0; i<n2; i++){
    v2[i]=rand()%100;
}

int* uniao( int *v1, int n1, int *v2, int n2);




free(Var);
return 0;
}
