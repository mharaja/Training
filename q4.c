#include<stdio.h>
#include<math.h>

int main()
{
	int b;
	int d=0;
	int i=0;
	int r;
	printf("Enter a binary number : ");
	scanf("%d",&b);
	while(b!=0)
	{
		r = b%10;
		b = b/10;
		d = d + (r*pow(2,i));
		i++;
	}
	printf("Decimal number is : %d",d);
	printf("\n\n");
	return 0;
}
