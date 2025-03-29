#include <stdio.h>

int main()
{
	float incr = 0.0;
	float price = 0.0;
	float percent = 0.0;

	printf("Enter price: ");
	scanf("%f", &price);

	printf("Enter percentage increase: ");
	scanf("%f", &percent);

	incr = (price / 100) * percent;

	printf("Increase price --> %1.3f\n", incr);
	printf("Total price --> %1.3f\n", (incr + price));

	return 0;
}

