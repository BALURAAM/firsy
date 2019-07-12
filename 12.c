#include <stdio.h>
int main()
{
    int n, rev = 0, re, ori;
   
    scanf("%d", &n);
    if(n>=0&&n<=1000)
    {
    ori = n;
    while( n!=0 )
    {
        re = n%10;
        rev = rev*10 + re;
        n /= 10;
    }
    if (ori == rev)
        printf("yes");
    else
        printf("no");
    
    return 0;
}}
