#include<stdio.h>
int main()
{
    int i,n,val=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            val=1;
            break;
        }
    }
    if(n==1)
        printf("it is neither prime nor composite");
    else if(val==0)
        printf("yes");
    else
        printf("no");
}
