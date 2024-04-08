//check if num is even or odd by ternary operator..

#include<stdio.h>

main(){
	
	int num;
	
	printf("Enter Value of Number : ");
	scanf("%d",&num);
	
	(num % 2 == 0)  ? printf("\nTHE NUMBER YOU HAVE ENTERED IS EVEN..!")
					: printf("\nTHE NUMBER YOU HAVE ENTERED IS ODD..!");
					
}
