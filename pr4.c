//take input number from 1 to 7 to know the corresponding day of week 

#include<stdio.h>

main(){
	
	int choice;
	
	printf("Enter Any Num from 1 to 7 To know the corresponding day of the week : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\nThe Num You Have Choose has corresponding day is MONDAY.. ");	
			break;
			
		case 2:
			printf("\nThe Num You Have Choose has corresponding day is TUESDAY.. ");	
			break;
			
		case 3:
			printf("\nThe Num You Have Choose has corresponding day is WEDNESDAY.. ");	
			break;
			
		case 4:
			printf("\nThe Num You Have Choose has corresponding day is THURSDAY.. ");	
			break;
			
		case 5:
			printf("\nThe Num You Have Choose has corresponding day is FRIDAY.. ");	
			break;
			
		case 6:
			printf("\nThe Num You Have Choose has corresponding day is SATURDAY.. ");	
			break;
			
		case 7:
			printf("\nThe Num You Have Choose has corresponding day is SUNDAY.. ");	
			break;
			
		default:
			printf("\n\nThe Number You Have Entered is INVALID!!\n\nPlease Enter The Valid Number..");
	}	
}
