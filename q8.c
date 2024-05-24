#include<stdio.h>
int main()
{
    int temperature;
    printf("Enter temperature value : ");
    scanf("%d",&temperature);
    
    if(temperature < 10)
        printf("\nIt's cold outside, stay warm!");
    else if(temperature >=10 && temperature <=19)
        printf("\nIt's a bit chilly, wear a jacket.");
    else if(temperature >=20 && temperature <=30)
        printf("\nThe weather is nice and warm.");
    else
        printf("\n It's hot outside, stay hydrated!");
    
    printf("\n\n");
    return 0;
}
