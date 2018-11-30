#include<stdio.h>

void main()
{
int n=10,a,k,i=0,j=1;

printf("%d %d",i,j);
    for(k=2;k<n;k++)
    {
        a=i+j;
        i=j;
        j=a;
            printf(" %d",a );
    }
}
