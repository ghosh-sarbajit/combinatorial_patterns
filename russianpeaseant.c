#include <stdio.h>

// A method to multiply two numbers using Russian Peasant method 
long long unsigned int russianPeasant(long long unsigned int a, long long unsigned int b) 
{ 
	long long unsigned int res = 0; // initialize result 

	// While second number doesn't become 1 
	while (b > 0) 
	{ 
		// If second number becomes odd, add the first number to result 
		if (b & 1) 
			res = res + a; 

		// Double the first number and halve the second number 
		a = a << 1; 
		b = b >> 1; 
	} 
	return res; 
} 

// Driver program to test above function 
int main() 
{ 
    long long unsigned int x,y;
    printf("%s","Enrer num1: ");
    scanf("%lld", &x);
    printf("%s","Enrer num1: ");
    scanf("%lld", &y);
    printf("%lld",russianPeasant(x,y));
    printf("\n%lld",x+1);
    return 0; 
} 
