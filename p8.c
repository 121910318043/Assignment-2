#include<stdio.h>
//Program to check whether the given number is even or odd using a bitwise operator
int main()
{
    int n;
    printf("Enter a Number ");
    scanf("%d",&n);
    if(n&1)
    {
        printf("The given number is odd");
    }
    else
    {
        printf("The given number is even");
    }
    return 0;
}
