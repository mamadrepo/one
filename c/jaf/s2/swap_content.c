#include <stdio.h> 

int main()
{
	int one = 15;
	int two = 20;

	printf("Before swap:\n");
	printf("one --> %d\ttwo --> %d\n", one, two);

	one += two;
	two = one - two;
	one -= two;

	printf("After swap:\n");
	printf("one --> %d\ttwo --> %d\n", one, two);


	return 0;
}
