#include<stdio.h>
    int main()
    {
        int i, j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
        {
            if(i==1 && j==1)
            printf(" ");
            else if(i==1 && j==2)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
        }
    }
    