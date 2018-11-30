#include <stdio.h>

void main()
{
    int i,j,n=0,flag=0;
    char str[100];
    printf("Enter a String: ");
    gets(str);
     for(i=0;i<str[i]!='\0';i++) n++;
     for(i=0,j=n-1;i<n/2;i++,j--)
       if(str[i]!=str[j])
         flag=1;
    if(flag==0) printf("The given String is a Palindrome");
    else printf("The given String is a Not A Palindrome");
}
