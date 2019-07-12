#include<stdio.h>
int main()
{
    int i,a,fact=1;

    scanf("%d",&a);
    if(a<=20)
    {
    for(i=1;i<=a;i++)
    {
        fact=fact*i;

    }
    printf("%d",fact);

}
}
