#include "array_function.h"
#include <stdlib.h>
#include <stdio.h>

int smaller(int tableau[], int tailleTableau);
void swap(int *a, int *b);
int *slice(int tableau[], int start, int end);

int main()
{
	int tableau[7] = {2, 25, 35, 65, 79, 43, 41};
	int start = 2;
	int end = 5;
	int petit = smaller(tableau, 7);
	printf("%d\n", petit);
	printf("%d\n", tableau[0]);

	
	swap(&tableau[petit], &tableau[4]);

	printf("%d ----  ", tableau[0]);


	int i;
	for(i = 0; i < 7; i++)
		{
			printf(" %d, ", tableau[i]);
		}
}
