#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("Sum of digits of number is : ");
    int r,ans=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        ans = ans + r;
    }
    printf("%d",ans);
    printf("\n\n");
    return 0;
}

