#include <stdio.h>


int main()
{
	char ch = 'a';
	int int_one = 1234;
	long int l_int = 10;
	unsigned int u_int = 100;
	unsigned long int ul_int = 100;
	long long int ll_int = 1000;
	float float_one = 123.4567;
	double double_one = 1.2345678;
	long double l_double = 1.23456789;
	

	printf("hello world\n"); //print string without args
	printf("%%c --> %c\n", ch); // for character type
	printf("%%d --> %d\n", int_one); // for signed integer type
	printf("%%i --> %i\n", -1234); // for signed integer type
	printf("%%u --> %u\n", 124); // for unsigned int
	printf("%%lu --> %lu\n", ul_int); // for unsigned long or unsigned int
	printf("%%li --> %li\n", l_int); // for long
	printf("%%ld --> %ld\n", l_int); // for long
	printf("%%lli --> %lli\n", ll_int); // for long long
	printf("%%lld --> %lld\n", ll_int); // for long long
	printf("%%e --> %e\n", float_one); //for scientific notation of floats
	printf("%%E --> %e\n", float_one); //for scientific notation of floats
	printf("%%f --> %f\n", float_one); //for float type
	printf("%%g --> %g\n", float_one); //for float type with the current precision
	printf("%%G --> %G\n", float_one); //for float type with the current precision
	printf("%%lf --> %lf\n", double_one); // for double type
	printf("%%Lf --> %Lf\n", l_double); // for longdouble
	printf("%%o --> %o\n", int_one); // octal representation
	printf("%%s --> %s\n", "hello world"); // for string type
	printf("%%x --> %x\n", int_one); // hexadecimal representation
	printf("%%X --> %X\n", int_one); // hexadecimal representation
	printf("%%p --> %p\n", &int_one); // for pointer

	return 0;
}
