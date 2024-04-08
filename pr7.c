//a menu-driven program for Telecom call service conversation using nested switch case 

#include<stdio.h>

main(){
	
	int choice, english;
	
	printf("Enter 1 for ENGLISH..\n");
	printf("Enter 2 for HINDI..\n");
	printf("Enter 3 for GUJARATI..\n");
	
	printf("Enter Any Num from 1 to 3 to Choose Your Language : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	
			printf("\nPress 1 for Internet Recharge..\n");
			printf("Press 2 for Top-up Recharge..\n");
			printf("Press 3 for Special Recharge..\n");
				
			printf("\nEnter Any Num from 1 to 3 to Choose Your recharge : ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("\nYou have successfully done Internet Recharge... ");	
					break;
				
				case 2:
					printf("\nYou have successfully done Top-up Recharge... ");	
					break;
				
				case 3:
					printf("\nYou have successfully done Special Recharge... ");	
					break;
			
				default:
					printf("\nPlease Enter A valid Number..");
			}	
		break;
		
		case 2:
			printf("\nInternet Recharge k liye 1 dabaye..\n");
			printf("Top-up Recharge k liye 2 dabaye..\n");
			printf("Special Recharge k liye 3 dabaye..\n");
				
			printf("\n1 se 3 k bich me koi bhi recharge karvane k liye yaha number daale: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("\nYou have successfully done Internet Recharge... ");	
					break;
				
				case 2:
					printf("\nYou have successfully done Top-up Recharge... ");	
					break;
				
				case 3:
					printf("\nYou have successfully done Special Recharge... ");	
					break;
			
				default:
					printf("\nKripaya 1 se 3 me se koi ek number daale..");
			}		
			break;
			
		case 3:
			printf("\nInternet Recharge karava mate 1 dabavo..\n");
			printf("Top-up Recharge karava mate 2 dabavo..\n");
			printf("Special Recharge karava mate 3 dabavo..\n");
				
			printf("\n1 thi 3 mathi koi ek recharge karava mate number dabavo: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("\nTamaru Internet recharge Safalta purvak thai gayu chhe... ");	
					break;
				
				case 2:
					printf("\nTamaru Top-up recharge Safalta purvak thai gayu chhe... ");	
					break;
				
				case 3:
					printf("\nTamaru Special recharge Safalta purvak thai gayu chhe... ");	
					break;
			
				default:
					printf("\nMaherbani kari 1 thi 3 mathi koi number dabavo..");
			}			
			break;
	}	
}
