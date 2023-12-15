// Write a Program to print Odd NUMBERS 1 to N using while loop:-

#include<stdio.h>

void main()
{
	int n=1;
	int number;
	printf("Enter any no:-");
	scanf("%d",&number);
	printf("odd Numbers are:-\n");
	while(n < number){
		
		if(n%2!=0){
			printf("%d \n",n);
		}
		
		n++;
	}
}
