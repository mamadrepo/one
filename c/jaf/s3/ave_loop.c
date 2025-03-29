#include <stdio.h> 

int main()
{
	float ave = 0.0;
	float get_num;

	for(int i = 0; i < 5; i++){
		printf("Enter num %i: ", i + 1);
		scanf("%f",&get_num);
		ave += get_num;
	}
	ave /= 5;
	printf("Average: %2.3f\n", ave);

	return 0;
}
