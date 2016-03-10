#include <stdio.h>
#include <stdlib.h>

int main (){

int x=0, i, y=5, c=0;

int *Var = (int *)malloc (y * sizeof(int));

if(Var == NULL){
	printf("ERRO DE ALOCACAO DE MEMORIA");
	}
else {
	for (i=0; i<=y; i++){
		printf("ENTRE COM UM INTEIRO: \n");
		if(scanf("%d", &x)==0){
			printf("GO TO HELL MOTAFOKA\n");
			break;
		}
		else
            if(i == y){
                y += 5;
                Var = (int *) realloc (Var, y * sizeof(int));
		}
		Var[i] = x;
		c++;

	}
}
    printf("\n\n\nVALORES DIGITADOS: \n\n");
    for (i=0; i<c; i++){
        printf("%d\n", Var[i]);
    }

free(Var);
return 0;
}
