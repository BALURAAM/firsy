#include <stdio.h>
int main()
{
    int n,q, i, flag;
    scanf("%d %d", &n, &q);
    n++;
    while (n < q)
    {
        flag = 0;

        for(i = 2; i<n; ++i)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", n);
        n=n+1;
    }
    return 0;
}
