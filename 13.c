#include <stdio.h>

void main()
{
    int i,j=0,n=0,temp;
    char str[100];
    printf("Enter a String: ");
    gets(str);

    for(i=0;i<str[i]!='\0';i++) n++;

    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
     printf("Reversed String: ");
    puts(str);
}
