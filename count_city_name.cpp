#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[20][20], name[20];
    int i,cnt=0, n, flag=0;
    printf("enter value n: ");
    scanf("%d",&n);
    printf("enter n city names:");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s1[i]);
    }
    printf("enter city to search:");
    scanf("%s",&name);

    for(i=0;i<n;i++)
    {
        if(strcmp(s1[i],name)==0)
        {
        flag=1;
        cnt++;
        }
    }
    if(flag==1)
    {
    printf("\nfound");
    printf("\n no of times city found is %d",cnt);
    }
    else
    printf("\n not found");

}
