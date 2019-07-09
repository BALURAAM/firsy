#include<stdio.h>
int main()
{
    int count=0,a;
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
}
