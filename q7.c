#include<stdio.h>
int main()
{
	int n;
	printf("Enter the score between 0-100 : ");
	scanf("%d",&n);
	if(90<=n && n<=100)
		printf("Grade : A");
	else if(80<=n && n<=89)
		printf("Grade is : B");
	else if(70<=n && n<=79)
		printf("Grade is : C");
	else if(60<=n && n<=69)
		printf("Grade is : D");
	else if(0<=n && n<=60)
		printf("Grade is : F");
	else
		printf("Please enter a correct value");
	printf("\n\n");
	return 0;
}
