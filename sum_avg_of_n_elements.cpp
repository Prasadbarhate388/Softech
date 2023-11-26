#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, s, n, i;
    float avg;
    printf("enter the value of n") ;
    scanf("%d",&n);
    a=(int *) malloc(n * sizeof(int));
    printf("enter n elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];

    }printf("\nsum=%d",s);
      avg=(float)s/n;
    printf("\navg=%f",avg);
}
