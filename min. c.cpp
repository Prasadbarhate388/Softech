#include<stdio.h>
int main()
{
    int a[100], n, i, min;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);

    }
    min=a[0];
  for(i=0;i<n;i++)
     {
      if(a[i]<min)
      min=a[i];

     }
    printf("\nmin=%d",min);
}
  