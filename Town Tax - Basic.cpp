#include <stdio.h>

const double Tax_Rate = 0.0175; // constant declaration
int main(void) {
	
		/*Variable declarations*/
		double gross_income;
		double town_tax;

/*Function body*/
printf ("AUTO COMPUTES TOWN INCOME TAX\n");
printf ("Enter gross income: RM ");
scanf ("%lf", &gross_income);
town_tax = Tax_Rate * gross_income;
printf ("Town tax is RM %f .", town_tax);

return 0;
}   /*Function body end here*/ 


