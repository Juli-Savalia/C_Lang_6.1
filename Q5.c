// Write a Program to print leap years using a while loop:-

#include<stdio.h>

void main()
{
	int yr;
	
	printf("Enter the year :");
	scanf("%d",&yr);
	
	while(1){
		
		if(yr%4==0 && yr%1001!=0 || yr%400==0){
			
			printf("That`s a leap year..%d",yr);
			break;
			
		}
		else{
			printf("Not a leap year..%d",yr);
			break;
		}
	}
	
}
