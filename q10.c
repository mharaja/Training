#include<stdio.h>
int main()
{
    int m;
    int n;
    char op;
    int result;
       
    printf("\nEnter the operator('+','-','*','/') : ");
    scanf("%c",&op);
    printf("Enter two numbers :");
    scanf("%d%d",&m,&n); 
    switch(op){
        case '+':
            result = m+n;
            printf("\nAddition is : %d",result);
        break;
    
        case '-':
            result = m-n;
            printf("\nSubtraction is : %d",result);
        break;
    
        case '*':
            result = m*n;
            printf("\nMultiplication is : %d",result);
        break;
    
        case '/':
            result = m/n;
            printf("\nDivision is : %d",result);
        break;
    
        default:
            printf("Enter a correct operator");

    }
    printf("\n\n");
    return 0;
}
