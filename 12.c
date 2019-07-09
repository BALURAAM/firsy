#include <stdio.h>
int main()
{
    int n, rev = 0, rem, ori;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n>=0&&n<=1000)
    {
    ori = n;
    while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if (ori == rev)
        printf("yes");
    else
        printf("no");
    
    return 0;
}}
