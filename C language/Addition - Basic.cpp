// Addition of two numbers

#include <stdio.h>

int main (void)
{
	// set variable
	int first;
	int second;
	int sum;
	
	// request input for 'first' and 'second'
	printf ("Enter first number \n");
	scanf ("%d", &first);
	
	printf ("Enter second number \n");
	scanf ("%d", &second);
	
	// calculate both input and display the sum
	sum = first + second;
	printf ("Sum : %d", sum);
	
	return 0;
}
