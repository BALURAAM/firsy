#include<stdio.h>
int main()
{
    int i,n,q;
    scanf("%d%d",&n,&q);
    if(n<=100000&&q<=100000)
    {
    for(i=n+1;i<q;i++)
    {
        if(i%2==0)
            printf("%d  ",i);
    }

    }
}
