// average grade for ten students

#include <stdio.h>

int main(void)
{
	// set variable
	int numStudent = 1;
	int gradeStudent;
	float averageGrade = 0;
	
	// insert grade
	while ( numStudent <= 5){
		printf ("Insert grade for %d student : ", numStudent);
		scanf ("%d", &gradeStudent);
		++numStudent;
		
	averageGrade = averageGrade + gradeStudent ;
	}
	
	--numStudent;
	averageGrade = averageGrade / numStudent;
	printf ("The average grade for %d student(s) is %f",numStudent ,averageGrade);
	
	return 0;
}
