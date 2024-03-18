//using recursion
//Binary search using divide and conquer approach
#include<stdio.h>
int bs(int lb,int ub,int a[],int item)
{
    while(lb<=ub)
    {
        int mid=lb+(ub-lb)/2;
        if(a[mid] == item)
            return 1;
        if(a[mid] > item)
            ub=mid-1;
        if(a[mid]<item)
            lb=mid+1;
    }
}
int main()
{
     int n,i,a[10],item,lb=0,ub=n-1;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the item is:");
    scanf("%d",&item);
    int x=bs(0,n-1,a,item);
    if(x == -1)
        printf("%d element not found",item);
    else
        printf("%d element found",item);       
    return 0;
}