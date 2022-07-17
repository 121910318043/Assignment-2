#include<stdio.h>
int main()
{
    int a,b,c,t,n;
    printf("Enter a three digit number ");
    scanf("%d",&n);
    a=n/100;
    b=n%10;
    t=n/10;
    c=t%10;
    printf("The sum of the digits = %d",a+b+c);
}
