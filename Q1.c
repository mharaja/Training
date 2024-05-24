#include<stdio.h>

int main()
{
	int a;
	int b;
	int result;
	int s;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Enter the arithmetic operator (1 for'+' ,2 for '-' ,3 for '*' and 4 for '/') : ");
	scanf("%d",&s);
	if(s==1)
	{
		result = a+b;
		printf("Sum is %d",result);

	}
	else if(s==2)
	{
		result = a-b;
		printf("Subtraction is %d",result);

	}
	else if(s==3)
	{
		result = a*b;
		printf("Multiplication is %d",result);

	}
	else if(s==4)
	{
		result = a/b;
		printf("Division is %d",result);
	}
	else
	{
		printf("Please enter a correct value");
	}

	printf("\n\n");
	return 0;
}

