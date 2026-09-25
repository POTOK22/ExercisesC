#include <stdio.h>

static inline int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	printf("%d\n", add(5,3));

	return 0;
}