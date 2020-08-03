#include <stdio.h>

// A method to multiply two numbers using Russian Peasant method 
unsigned long long int russianPeasant(unsigned long long int a, unsigned long long int b) 
{ 
	unsigned long long int res = 0; 
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
    unsigned long long int x,y;
    printf("%s","Enrer num1: ");
    scanf("%llu", &x);
    printf("%s","Enrer num1: ");
    scanf("%llu", &y);
    printf("%llu",russianPeasant(x,y));
    printf("\n%llu",x+1);
    return 0; 
} 
