#include<stdio.h>
#define WE 1.8
int main()
{
	float c;
	float f;
	printf("Enter temperature in Celcius");
	scanf("%f",&c);
	f = ((WE*c)+32);
	printf("Temperature in Fahrenheit is : %f",f);
	printf("\n\n");
	return 0;
}

