#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter two integer numbers: ");
    scanf ("%d %d", &a, &b);
    while (b > 0)
     {
        c = a % b;
        a = b;
        b = c;
     }
    printf ("GCD = %d \n",a);
}
