#include<stdio.h>
   struct student
   {
   int sno;
   char name[20];
   int per;
   }s1[100], t;
int main()
{
   int i, n, j, max;
   printf("enter limit:");
   scanf("%d",&n);
   printf("enter sno name per:");
   for(i=0;i<n;i++)
   {
       scanf("%d%s%d",&s1[i].sno,&s1[i].name,&s1[i].per);
   }
   max=s1[0].per;
   for(i=0;i<n;i++)
   {
   if(s1[i].per>max)
   max=s1[i].per;
   }
   printf("max per:%d",max);
}