// Counter-controlled repetition

#include <stdio.h>

int main(void)
{
	// set variable
	unsigned int counter = 1;
	
	// perform repetition
	while (counter <= 10) {
		printf("%u\n", counter);
		++counter; 
	}
}
