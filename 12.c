#include <stdio.h>
#include <ctype.h>

void main()
{
    int i,arr[26]={};
    char str[100];
    printf("Enter a String: ");
    gets(str);

     for(i=0;i<str[i]!='\0';i++){
         str[i]=tolower(str[i]);
        arr[str[i]-97]++;
     }

     for(i=0;i<26;i++){
        if(arr[i]>0)
            printf("%c: %d\n",i+97,arr[i]);
     }

}
