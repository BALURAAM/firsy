#include<stdio.h>
int main()
{
    int i,n,q,odd=0;
    scanf("%d%d",&n,&q);
    if(n<=100000&&q<=100000)
    {
    for(i=n;i<=q;i++)
    {
        if(i%2!=0)
            odd++;
    }
     printf("%d",odd);
    }
}
