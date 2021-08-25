// random seeding

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// set variable
	int counter;
	unsigned seed;
	
	// request input
	printf("Insert seed : ");
	scanf("%d", &seed);
	
	// produce random number based on seed * PICK ONE AND REMOVE THE '//'
	
	srand(seed);
	//srand(time(NULL));
	
	for( counter = 1; counter <= 10; ++counter){
		
		printf("%10d", 1 + (rand() % 6));
		
		if( counter%5 == 0){
			printf("\n");
		}
	}
	
	return 0;
}
