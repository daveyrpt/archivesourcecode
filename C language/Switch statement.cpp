// Switch statement

#include <stdio.h>

int main(void)
{
	// set variable
	int value;
	
	// request input
	printf("Insert input : ");
	scanf("%d", &value);
	
	// switch
	switch(value)
	{
		case 1:
			printf("Value is 1");
			break;
		case 2:
			printf("Value is 2");
			break;
		case 3:
			printf("Value is 3");
			break;
		case 4:
			printf("Value is 4");
			break;
		default:
			printf("Value is not 1, 2, 3, or 4");
	}
	
	return 0;
}
