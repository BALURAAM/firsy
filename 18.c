#include <stdio.h>
int main()
{
    int a,b,i, temp, rem,result;

    scanf("%d%d", &a,&b);
    while(a<b)
    {
        temp = a;
        result=0;
        while (temp > 0)
        {

            rem = temp%10;
            result = result+(rem*rem*rem);
            temp /= 10;
        }
        //printf("%d\n",result);
        //printf("%d\n",a);
        if(result== a)
        {
            printf("%d",a);}
        a++;

    }
        return 0;
}
