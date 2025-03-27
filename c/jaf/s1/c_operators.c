int main()
{

	//a = 10, b = 5, c = 0;	
	// c = a - b; --> 5
	// c = a + b; --> 15
	// c = a / b; --> 2
	// c = a * b; -->50
	// c = a % b; --> 0
	// c++; or ++c; --> 1
	// c--; or --c; --> -1
	

	// a = 10, b = 5;
	// a > b; --> 1(true)
	// a >= b; --> 1(true)
	// a < b; --> 0(false)
	// a <= b; --> 0(false)
	// a == b; --> 0(false)
	// a != b; --> 1(true)
	

	//x = 1, y = 0;
	//!x --> 0(false)
	//!y --> 1(true)
	//
	// x && x; --> 1(true)
	// x && y; --> 0(false)
	// y && y; --> 0(false)
	// y && x; --> 0(false)
	//
	// x || x; --> 1(true)
	// x || y; --> 1(true)
	// y || x; --> 1(true)
	// y || y; --> 0(false)
	

	// a = 10, b = 5;
	// a += b; --> 15;
	// a -= b; --> 5;
	// a *= b; --> 50;
	// a /= b; --> 2;
	// a %= b; --> 0;
	

	// x = 1, y = 0;
	// ~x; --> 0(false);
	// ~y; --> 1(true);
	//
	// x | x; --> 1(true);
	// x | y; --> 1(true);
	// y | x; --> 1(true);
	// y | y; --> 0(false);
	//
	// x & x; --> 1(true);
	// x & y; --> 0(false);
	// y & x; --> 0(false);
	// y & y; --> 0(false);
	// 
	// x ^ x; --> 0(false);
	// x ^ y; --> 1(true);
	// y ^ x; --> 1(true);
	// y ^ y; --> 0(false);


	// x = 7; --> 00000111
	// x << 1; --> 00001110 # x --> 14
	// x << 2; --> 00011100 # x --> 28
	// 
	// x = 96; --> 01100000
	// x >> 1; --> 00110000 # x --> 48
	// x >> 2; --> 00001100 # x --> 12
	

	// * and &
	// &x --> returns x address in memory
	// *x --> indirect memory access
	

	// <statement> ? <statement> : <statement;
	// <true> ? <do this> : <none>
	// <false> ? <none> : <do this>
	
	
	// , 
	// int x;
	// x = x = 2, x *= 2; --> x = 4
	
	
	//sizeof --> returns the length of a variable in bytes
	//sizeof(int) --> in 64 bit processor(4 bit)
	//int x = 0;
	//sizeof x; --> no need to use () for variables.
	

	// () --> it is an operator that increases the precedence of the operators within it.
	// int x = 2 * (3 + 1) / 2; --> 4
	

	// operator precedence
	// --------------------
	// | ()		      |
	// | ! ~ ++ -- sizeof |
	// | * / % 	      |
	// | + -	      |
	// | << >> 	      |
	// | < <= > >=	      |
	// | == !=	      |
	// | &		      |
	// | ^		      |
	// | |		      |
	// | &&		      |
	// | ||		      | 
	// | ?		      |
	// | = += -= *= /= %= |
	// --------------------
	// 
	//
	// 

	return 0;
}
