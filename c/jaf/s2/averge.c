#include <stdio.h>

int main()
{
	int one = 0, two = 0, three = 0;
	
	printf("Enter three number: ");
	scanf("%d%d%d", &one, &two, &three);

	int aver = (one + two + three) / 3;

	printf("Average --> %d\n", aver);


	return 0;
}
