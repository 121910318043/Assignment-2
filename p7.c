 #include<stdio.h>
 //Program to find the position of first 1 in LSB
 int main()
 {
     int n,i=0,count=0;
     printf("Enter a number ");
     scanf("%d",&n);
     while(i!=1)
     {
         i = n&1;
         count++;
         n = n>>1;
     }
     printf("The position of first 1 is %d",count);
     return 0;
 }
