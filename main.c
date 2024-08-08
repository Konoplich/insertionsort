#include <stdio.h>
#include <stdlib.h>
#include "libinsertionsort.h"

int main(int argc, char **argv)
{
	int test[] = {8,5,2,3,6};
	insertionsort(test, 5);
	for(int i=0; i < 5;i++)
		printf("%d ",test[i]);
}

