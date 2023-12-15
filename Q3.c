// Write a Program to print Even NUMBERS 1 to N using while loop:-

#include<stdio.h>

void main()
{
	int n=1;
	int number;
	printf("Enter any no:-");
	scanf("%d",&number);
	printf("Even Numbers are:-\n");
	while(n<=number){
	
		if(n%2==0){
			printf("%d \n",n);
		}
		
		n++;
	}
}
