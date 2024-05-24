#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\nLargest number is %d",a);
	}
	else if(b>a && b>c)
	{
		printf("\nLargest number is %d",b);
	}
	else
		printf("\nLargest number is %d",c);
	printf("\n\n");
	return 0;
}
