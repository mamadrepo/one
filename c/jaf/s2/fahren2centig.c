#include <stdio.h>

int main()
{
	float centig = 0.0;
	float fahren = 0.0;

	printf("Enter fahrenheit: ");
	scanf("%f", &fahren);

	centig = ((float)5 / 9) * (fahren - 32);

	printf("Centigrade --> %6.3f\n", centig);

	return 0;
}
