// valgrind2.c

#include <stdio.h>
#include <stdlib.h>

// la memoria va liberata ogni volta quindi ho messo 2 free in più

int main()
{
	char *p;

	p = (char *) malloc(19);
	free(p);
	p = (char *) malloc(12);
	free(p);
	p = (char *) malloc(16);	
	free(p);
	return 0;
}
