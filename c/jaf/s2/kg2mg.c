#include <stdio.h>

int main()
{
	float kg = 0.0;
	float mg  = 0.0;

	printf("Enter KG: ");
	scanf("%f", &kg);

	mg = kg * 1000;

	printf("mg --> %6.2f\n", mg);


	return 0;
}
