#include<stdio.h>
int main() 
{
    int i, j, k=1;
    for(i=1;i<=4;i++)
    {
    for(j=1;j<=i;j++)
    {
        printf(" %d",k);
        if(k==1) 
        k=2;
        else
        k=1;
       
    }
     if(i%2==0) 
        {
          k=1;
        }
    printf("\n");
    printf("\n");
    }
}

