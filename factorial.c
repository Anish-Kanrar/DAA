//factorial using recursion
#include<stdio.h>

int factorial(int n)
{
    if(n == 1)
        return 1;
     else
        return n*factorial(n-1);   
}
int main()
{
    int n,x;
    printf("Enter the number:");
    scanf("%d",&n);
    x=factorial(n);
    printf("factorial is %d",x);
    
    return 0;
}