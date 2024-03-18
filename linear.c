//Linear searchusing recursion
#include<stdio.h>

int ls(int a[],int item,int index,int n)
{
    if(n == index)
        return -1;
    if(a[index] == item) 
        return index;
    return ls(a,item,index+1,n);       
}
int main()
{
    int n,i,a[10],item;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the item:");
    scanf("%d",&item);
    int x=ls(a,item,0,n);
    if(x == -1)
        printf("%d number is not found",item);
    else
        printf("%d number is found",item);    
    return 0;
}