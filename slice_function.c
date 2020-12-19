#include "array_function.h"
#include <stdlib.h>
#include <stdio.h>

int *slice(int tableau[], int start, int end)
{
	int *sub_array = malloc((end - start) * sizeof(int));
	int j;
	j = 0;

	while (start < end)
	{
		sub_array[j] = tableau[start];

		start++;
		j++;
	}
	return sub_array;
}
