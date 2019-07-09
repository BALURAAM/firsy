#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if( a>=b && a>=b )
        printf("%.2f is the largest number.", a);
    if(b>=a && b>=c )
        printf("%.2f is the largest number.", b);
    if( c>=a && c>=b )
        printf("%.2f ", c);
    return 0;
}
