#include "array_function.h"
#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b)
{	
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
