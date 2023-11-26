#include<stdio.h>
int main()
{
    int i,j, n;
    for(i=1;i<=20;i++)
    {
        for(j=20;j>i;j--)

        printf(" ");

        for(j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");

    }
    for(i=20-1;i>=1;i--)
    {
    for(j=1;j<=i;j++)
    printf(" *");

    printf("\n");
    for(j=20-1;j>=i;j--)
    printf(" ");
    }

}