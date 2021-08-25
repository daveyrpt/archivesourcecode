// if else 

#include <stdio.h>

int main(void)
{
	// set variable
	int grade;
	
	// input grade
	printf("Insert grade : ");
	scanf("%d", &grade);
	
	// set condition
	if(grade >= 90)
		printf("Mark A");
	
	else if(grade >= 80)
		printf("Mark B");
	
	else if(grade >= 70){
		printf("Mark C");
	}
	else if(grade >= 60){
		printf("Mark D");
	}
	else{
		printf("You are a failure!");
	}

return 0;
}
