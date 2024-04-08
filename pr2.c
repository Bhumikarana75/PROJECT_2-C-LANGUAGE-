//electricity bill unit 

#include<stdio.h>

main(){
	
	int unit, total_amount, sur_charge;
	
	printf("****************\n");
	printf("electricity bill\n");
	printf("****************\n");
	
	printf("Enter Your electricity unit charges : ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		total_amount = unit * 0.50;
	}
	else if(unit<=150)
	{
		total_amount = 25 + ((unit - 50) * 0.75);
	}
	else if(unit<=250)
	{
		total_amount = 100 + ((unit - 150) * 1.20);
	}
	else
	{
		total_amount = 220 + ((unit - 250) * 1.50);
	}
	
	printf("\nYour Electricity Bill Charge is %d",total_amount);
	printf("rs.");
	
	printf("\n\nWith Additional Surcharge Your Electricity Bill is : ");
	
	sur_charge = total_amount * 0.20;
	total_amount = total_amount + sur_charge;
	
	printf("%d",total_amount);
	printf("rs.");
}
