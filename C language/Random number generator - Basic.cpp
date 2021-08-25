// Random number generator

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// set variable
	unsigned int i; // act as counter
	int max;
	
	// request input
	printf("Insert maximum number to display : ");
	scanf("%d", &max); 
	
	for(i=1; i<=max; ++i){
		
		// random pick from '1' to '6'
		printf("%10d", 1 + ( rand() % 6));
		
		// after 5 digits create a new line for another digits
		if(i%5 == 0){
			puts("");
		}
	}
	return 0;
}
