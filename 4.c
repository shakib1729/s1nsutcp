#include<stdio.h>

void main()
{
 int num, rev=0;
 printf("Enter a Number to Reverse \n");
    scanf("%d",&num);
 while(num!=0)
    {
        rev*=10;
        rev+=num%10;
        num/=10;
    }
 printf("The reverse of the entered number is %d",rev);
}
