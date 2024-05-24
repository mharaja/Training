#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number you want to check : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is an Even number",num);
	}
	else
	{
		printf("\n%d is an Odd number",num);
	}
	printf("\n\n");
	return 0;
}
