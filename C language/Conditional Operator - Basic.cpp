// Conditional Operator

#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Insert number : ");
	scanf("%d", &number);
	
	// Conditional Operator
	(number%2 == 0)? printf("Even!"): printf("Odd!");
}
