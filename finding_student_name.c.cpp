#include<stdio.h>
#include<string.h>
  struct student
  {
  int sno;
  char name[20];
  int per;
  }s1[100], t;
int main()
{
  int i, n, j, max;
  char nm[20];
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter sno name per:");
  for(i=0;i<n;i++)
  {
      scanf("%d%s%d",&s1[i].sno,&s1[i].name,&s1[i].per);
  }
  printf("enter name to search:");
  scanf("%s",&nm);
  for(i=0;i<n;i++)
  {
      if(strcmp(s1[i].name,nm)==0)
      printf("record found");
      break;
  }
  if(i==n-1)
  {
  printf("record not found");
  }



}
  