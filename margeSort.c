//using recursion
#include<stdio.h>

void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,k=lb,j=mid+1,b[10];
    while(i<=mid && j<=ub)
    {
      if(a[i]<a[j])
      {
        b[k]=a[i];
        i++;
        k++;
      }
      else
      {
        b[k]=a[j];
        k++;
        j++;
      }
    }
    while(i<=mid)
    {
      b[k]=a[i];
      k++;
      i++;
    }
    while(j<=ub)
    {
      b[k]=a[j];
      k++;
      j++;
    }
    for(int i=lb;i<=ub;i++)
    {
      a[i]=b[i];
    }
}

int mergesort(int a[],int lb,int ub)
{
  if(lb<ub)
  {
    int mid=(lb+ub)/2;
    mergesort(a,lb,mid);
    mergesort(a,mid+1,ub);
    merge(a,lb,mid,ub);
  }
}
int main()
{
    int i,n,a[10];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
     for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    mergesort(a,0,n-1);
    printf("After sorting:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}