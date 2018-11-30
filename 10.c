#include <stdio.h>

void main()
{
    float a,b,ans;
    char op;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("\nEnter Option: +,-,*,/ \n");
    scanf(" %c",&op);

     switch(op){

        case '+': ans=a+b;
                 break;
        case '-': ans=a-b;
                 break;
        case '*': ans=a*b;
                 break;
        case '/': ans=a/b;
                 break;
        default: printf("Wrong Option");
     }

     printf("\n Answer = %.2f",ans);
}
