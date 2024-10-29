#include <stdio.h>
void main()
{
    double a=123.456;
    double i;
    int n;
    
    n=(int)a;
    printf("정수부: %d\n",n);
    i=a-n;
    printf("소수부: %f",i);
}