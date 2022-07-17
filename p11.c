#include<stdio.h>
//Append digit in the number and print the resulting number
int main()
{
    int i,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    printf("Enter a digit ");
    scanf("%d",&i);
    n=n*10;
    printf("The resulting number is %d",n+i);
}
