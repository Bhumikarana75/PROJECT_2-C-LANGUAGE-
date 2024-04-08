//menu-driven program for Restaurant using nested switch case

#include<stdio.h>

main(){
	
	int choice, variety, rating;
	
	printf("Press 1 to order PIZZA.\n");
	printf("Press 2 to order BURGER.\n");
	printf("Press 3 to order FRENCH FRIES.\n");
	printf("Press 4 to order SANDWICH.\n");
	printf("Press 5 to order COLD DRINKS.\n");
	printf("Press 6 to order SHAKES.\n\n");
	
	printf("ENTER YOUR ORDER : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nYou have ordered PIZZA..!");
			
			printf("\nPress 1 to order MARGRETAA PIZZA.\n");
			printf("Press 2 to order CORN N CHEESE PIZZA.\n");
			printf("Press 3 to order ITALIAN PIZZA.\n\n");
			
			printf("\nCHOOSE YOUR FAV PIZZA : ");
			scanf("%d",&variety);
			
			switch(variety){
					case 1:
						printf("\nMARGRETAA PIZZA");
						printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nCORN N CHEESE PIZZA");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 3:
					printf("\nITALIAN PIZZA");
						printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\n Plase enter valid input..");
				}
				break;
				
				case 2:
			printf("\nYou have ordered BURGER..!");
			{		
				printf("\nPress 1 to order NORMAL BURGER.\n");
				printf("Press 2 to order CHEESE BURGER.\n");
				printf("Press 3 to order DOUBLE PETTY BURGER.\n");
				printf("Press 4 to order MEXICO BURGER.\n\n");
				
				printf("\n CHOOSE YOUR FAV BURGER : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\nNORMAL BURGER");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nCHEESE BURGER");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 3:
						printf("\nDOUBLE PETTY BURGER");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 4:
						printf("\nMEXICAN BURGER");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\nPlase enter valid input..");
				}
			}
			break;
			
			case 3:
			printf("\nYou have ordered FRENCH FRIES..!");
			{
					
				printf("\nPress 1 to order FRENCH FRIES.\n");
				printf("Press 2 to order PERI PERI FRENCH FRIES.\n");
				printf("Press 3 to order CHEESE FRENCH FRIES.\n");
				printf("Press 4 to order DOUBLE CHEESE FRENCH FRIES.\n\n");
				
				printf("\nCHOOSE YOUR FAV FRENCH FRIES : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\nFRENCH FRIES");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nPERI PERI FRENCH FRIES");
						printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 3:
						printf("\nCHEESE FRENCH FRIES");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
						
					case 4:
						printf("\nDOUBLE CHEESE FRENCH FRIES");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\nPlase enter valid input..");
				}
			}
			break;
			
			case 4:
			printf("\nYou have ordered SANDWICH..!");
			{
					
				printf("\nPress 1 to order VEG. SANDWICH.\n");
				printf("Press 2 to order CHEESE SANDWICH.\n");
				printf("Press 3 to order TOASTED SANDWICH.\n");
				printf("Press 4 to order RIMZIM SANDWICH.\n");
				printf("Press 5 to order SEZWAAN SANDWICH.\n");
				printf("Press 6 to order MATKA SANDWICH.\n");
				
				printf("\nCHOOSE YOUR FAV SANDWICH : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\nVEG. SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nCHEESE SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 3:
						printf("\nTOASTED SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 4:
						printf("\nRIMZIM SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 5:
						printf("\nSEZWAAN SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 6:
						printf("\nMATKA SANDWICH");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\nPlase enter valid input..");
				}
			}
			break;
			
			case 5:
			printf("\nYou have ordered COLD DRINKS..!");
			{
					
				printf("\nPress 1 to order SHOTS.\n");
				printf("Press 2 to order MOJITO.\n");
				printf("Press 3 to order BEAR.\n\n");
				
				printf("\nCHOOSE YOUR FAV DRINKS : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\nSHOTS");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nMOJITO");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
							printf("Please enter valid number for rating..");
						}
						break;
					case 3:
						printf("\nBEAR");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\nPlase enter valid input..");
				}
			}
			break;
			
			case 6:
			printf("\nThis is SHAKES..!");
			{
					
				printf("\nPress 1 to order CHOCOLATE SHAKE.\n");
				printf("Press 2 to order MANGO SHAKE.\n");
				printf("Press 3 to order KIT-KAT SHAKE.\n");
				printf("Press 4 to order OREO SHAKE.\n\n");
				
				printf("\nCHOOSE YOUR FAV SHAKE : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\nCHOCOLATE SHAKE");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 2:
						printf("\nMANGO SHAKE");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 3:
						printf("\nKIT-KAT SHAKE");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					case 4:
						printf("\nOREO SHAKE");
							printf("\nTHANK YOU FOR YOUR ORDER. YOUR ORDER WILL ARRIVE SOON..\nTill that please give us your good rating :");						

						printf("\npress 1 for 1-star rating\n");
						printf("press 2 for 2-star rating\n");
						printf("press 3 for 3-star rating\n");
						printf("press 4 for 4-star rating\n");
						printf("press 5 for 5-star rating\n");			
			
						printf("rating :");
						scanf("%d",&rating);	
							
						switch (rating){
							
							case 1:
								printf("THANK YOU FOR YOUR 1-STAR RATING.. we will try our best to make improvement..");
								break;
							case 2:
								printf("THANK YOU FOR YOUR 2-STAR RATING.. we will try our best to make improvement..");
								break;
							case 3:
								printf("THANK YOU FOR YOUR 3-STAR RATING.. we will try our best to make improvement..");
								break;
							case 4:
								printf("THANK YOU FOR YOUR 4-STAR RATING..");
								break;
							case 5:
								printf("THANK YOU FOR YOUR 5-STAR RATING..");
								break;
							default:
								printf("Please enter valid number for rating..");
						}
						break;
					default:
						printf("\nPlase enter valid input..");	
				}
			}
			break;
			
			default:
				printf("\nPlase enter valid input..");
	}
	
}
