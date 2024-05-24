#include<stdio.h>
#define PI 3.14
int main()
{
	float r;
	float ar;
	float cir;
	printf("Enter the radius of circle : ");
	scanf("%f",&r);
	ar = PI*r*r;
	cir = 2*PI*r;
	printf("\nArea of circle is : %f",ar);
	printf("\nCircumference of circle is %f",cir);
	printf("\n\n");
	return 0;
}
