#include<stdio.h>
// Program to make the last digit of a number stored in a variable as zero
int main()
{
    int n;
    printf("Enter a Number ");
    scanf("%d",&n);
    n=n/10;
    printf("The number is %d",n*10);
    return 0;
}
