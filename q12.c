#include <stdio.h>
#include<math.h>

int main()
{
    long n;
    printf("Enter the number : ");
    scanf("%ld",&n);
    long a;
    a = sqrt(n);
    long b = a+1;
    
    long c = a*a;
    long d = b*b;
    
    long e = n-c;
    long f = d-n;
    
    if(e<=f)
        printf("Closest integer having a whole number square root is : %ld",c);
    else
        printf("Closest integer having a whole number square root is : %ld",d);
    
    printf("\n\n");
    return 0;
}

