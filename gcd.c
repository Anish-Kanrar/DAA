//GCD of two number Using recursion
#include<stdio.h>

int gcd(int n2,int n1){
    if(n2 % n1 == 0)
        return n1;
    else
        return gcd(n1,n2%n1);    
}
int main()
{
    int x,n1,n2;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    x=gcd(n2,n1);
    printf("gcd is %d",x);
    return 0;
}