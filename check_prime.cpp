#include<stdio.h>
   int main()
   {
       int n, i, f=1;
       printf("enter number");
       scanf("%d",&n);
       for(i=2;i<n;i++)
       {
           if(n%i==0 )
           {
           f=0;
           break;
           }
       }

       if(f==0)
      printf("no is not prime");
   else
   printf("no is prime");
}
