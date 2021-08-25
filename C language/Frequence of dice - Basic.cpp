// Frequency of dice face

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// set variable
	unsigned int freq1 = 0;
	unsigned int freq2 = 0;
	unsigned int freq3 = 0;
	unsigned int freq4 = 0;
	unsigned int freq5 = 0;
	unsigned int freq6 = 0;
	int roll;
	int counter; 
	int face;
	
	// request input
	printf("Insert how many rolls : ");
	scanf("%d", &roll);
	
	// loop N-numbers
	for(counter = 1; counter <= roll; ++counter){
		
		face = 1 + rand() % 6; 
		
		switch(face)
		{
			case 1:
				++freq1;
				break;
			case 2:
				++freq2;
				break;
			case 3:
				++freq3;
				break;
			case 4:
				++freq4;
				break;
			case 5:
				++freq5;
				break;
			case 6:
				++freq6;
				break;
		}
	}
	
	// display frequence each face
	// '%13u' indicate the horizon distance
	
	printf("%s %7s\n","Face","Frequency");
	printf("1 %13u\n",freq1);
	printf("2 %13u\n",freq2);
	printf("3 %13u\n",freq3);
	printf("4 %13u\n",freq4);
	printf("5 %13u\n",freq5);
	printf("6 %13u\n",freq6);
	
	return 0;
}
