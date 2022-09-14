#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);

    double x=a/b;

    printf("ceil %.0lf / %.0lf = %.0lf",a,b,ceil(x));



}
