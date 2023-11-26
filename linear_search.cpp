#include<stdio.h>
int main()
{
   int  a[100], n, i,num, flag=0;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("found \nat pos=%d  ",i);
    else
    printf("not found");
}

