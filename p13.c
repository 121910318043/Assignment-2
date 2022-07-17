#include<stdio.h>
//program to rotate its digit by one position towards right
int main()
{
    int n,r;
    printf("Enter a three digit number ");
    scanf("%d",&n);
    printf("rotated number is %d",(n%100)*10+(n/100));
}
