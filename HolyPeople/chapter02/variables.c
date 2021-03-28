#include <stdio.h>

int main(void) {
	
	int example = 78;
	int* p = &example;
	int** dp = &p;
	
	printf("%d\n", example);
	printf("%p %d\n", p, *p);
	printf("%p %p %d\n", dp, *dp, **dp);
	
	return 0;
}
