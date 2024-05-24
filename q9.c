#include<stdio.h>
int main()
{
    float w;
    float h;
    float bmi;
    printf("Enter weight in KGs : ");
    scanf("%f",&w);
    printf("Enter heinght in meter : ");
    scanf("%f",&h);
    bmi = w/(h*h);
    printf("\nBMI for the given values is : %f",bmi);
    
    if(bmi<18.5)
        printf("\nUnderweight");
    else if(bmi>=18.5 && bmi<24.9)
        printf("\nNormal Weight");
    else if(bmi>=25 && bmi<29.9)
        printf("\nOverweight");
    else
        printf("\nObesity");
    
    printf("\n\n");
    return 0;
}
