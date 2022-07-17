#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("swapped values = %d %d",a,b);
    return 0;
}
