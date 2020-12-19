#include "array_function.h"
#include <stdlib.h>
#include <stdio.h>

int smaller(int tableau[], int tailleTableau)
{
	int smaller;
	smaller = 0;
	int i;
	i = 0;

	while(i < tailleTableau)
	{
		if (tableau[i] < tableau[i +1])
		{
			if((smaller != i) && (tableau[smaller] != tableau[i]))
			{
				smaller = i;
				i = -1;
				/* reset l'index pour reparcourir le tableau une fois qu;on a trouver le smaller */
			}
		} 
	i++;
	}
	return (smaller);
}
