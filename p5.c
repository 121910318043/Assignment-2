#include<stdio.h>
//Sum of the Digits of any number
int main()
{
    int c,r,s=0;
    printf("Enter three a digit number ");
    scanf("%d",&c);
    while(c>0)
    {
        r=c%10;
        c=c/10;
        s=s+r;
    }
    printf("sum of the digits = %d",s);
    return 0;
}
