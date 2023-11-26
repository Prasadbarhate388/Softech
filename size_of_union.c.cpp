#include<stdio.h>
 int main()
 {
  union stud
 {
    int sno ;
    char sname[20];
     float per;
 }s1;
 printf("%d",sizeof(s1));
 }