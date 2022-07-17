#include<stdio.h>
//Unit digit of the number
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("The Unit Digit of the number %d is %d",n,n%10);
    return 0;
}
