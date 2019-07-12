#include <stdio.h>
int main()
{
    int a,i, temp, rem,result;

    scanf("%d", &a);

    temp = a;
    while (temp != 0)
    {

        rem = temp%10;
            result = result+(rem*rem*rem);
        temp /= 10;
    }
    if(result== a)
        printf("yes");
    else
        printf("no");
    return 0;
}
