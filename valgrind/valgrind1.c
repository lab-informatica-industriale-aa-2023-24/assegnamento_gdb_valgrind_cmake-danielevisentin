// valgrind1.c
// In questo file ci sono due problemi
#include <stdio.h>
#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0;
	free(x);
}

int main(void)
{
	f();
	
	
	return 0;
}
