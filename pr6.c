//WAP to know the MINIMUM num of given num three num by ternary

#include<stdio.h>

main(){
	
	int num_1, num_2, num_3;
	
	printf("Enter The Value of 1st Number : ");
	scanf("%d",&num_1);
	printf("Enter The Value of 2nd Number : ");
	scanf("%d",&num_2);
	printf("Enter The Value of 3rd Number : ");
	scanf("%d",&num_3);
	
	(num_1 < num_2) ? (num_1 < num_3) ? printf("\n1st Number is MINIMUM..")
						 			  : printf("\n3rd Number is MINIMUM..")
					: (num_2 < num_3) ? printf("\n2nd Number is MINIMUM..")
									  : printf("\n3rd Number is MINIMUM..");
	
}
