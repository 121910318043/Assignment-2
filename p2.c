#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number ");
    scanf("%d",&n);
    if(n/10)
    printf("The number %d without its last digit is %d",n,n/10);
    else
    printf("The number without its last digit is ");
    return 0;
}
