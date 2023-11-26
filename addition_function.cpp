#include<stdio.h>
int main()
{
int a, b;
void add(int *x, int *y) ;
printf("enter two numbers");
scanf("%d%d",&a,&b);
add(&a, &b);
}
void add(int *x, int *y)
{
    int c;
    c=*x+*y;
    printf("additiona=%d",c);
}
