//take input number from 1 to 12 to know the corresponding month of year 

#include<stdio.h>

main(){
	
	int choice;
	
	printf("Enter Any Num from 1 to 12 To know the corresponding day of the week : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nThe Num You Have Choose has corresponding Month is JANUARY.. ");	
			break;
			
		case 2:
			printf("\nThe Num You Have Choose has corresponding Month is FEBRUARY.. ");	
			break;
			
		case 3:
			printf("\nThe Num You Have Choose has corresponding Month is MARCH.. ");	
			break;
			
		case 4:
			printf("\nThe Num You Have Choose has corresponding Month is APRIL.. ");	
			break;
			
		case 5:
			printf("\nThe Num You Have Choose has corresponding Month is MAY.. ");	
			break;
			
		case 6:
			printf("\nThe Num You Have Choose has corresponding Month is JUNE.. ");	
			break;
			
		case 7:
			printf("\nThe Num You Have Choose has corresponding Month is JULY.. ");	
			break;	
			
		case 8:
			printf("\nThe Num You Have Choose has corresponding Month is AUGUST.. ");	
			break;
				
		case 9:
			printf("\nThe Num You Have Choose has corresponding Month is SEPTEMBER.. ");	
			break;
				
		case 10:
			printf("\nThe Num You Have Choose has corresponding Month is OCTOMBER.. ");	
			break;
				
		case 11:
			printf("\nThe Num You Have Choose has corresponding Month is NOVEMBER.. ");	
			break;
				
		case 12:
			printf("\nThe Num You Have Choose has corresponding day is DECEMBER.. ");	
			break;
					
		default:
			printf("\n\nThe Number You Have Entered is INVALID!!\n\nPlease Enter The Valid Number..");
	}	
}
