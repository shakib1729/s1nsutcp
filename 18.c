#include <stdio.h>


void display(char str[100]){
    char ch;
 FILE *fptr;
    fptr=fopen(str,"r");
    printf("\nThe contents of %s file are:\n", str);
    ch = fgetc(fptr);
   while(ch != EOF){
     printf("%c", ch);
      ch = fgetc(fptr);
   }
    printf("\n\n");
    fclose(fptr);
}


void main()
{
    FILE *fptr1, *fptr2;
    char str[100], ch;

    printf("Enter the location of first File\n");
    scanf("%s", str);
    fptr1 = fopen(str, "r");
    if (fptr1 == NULL)
        printf("No such file \n");
    else{
        display(str);
        printf("\n\nEnter the location of second File\n");
    scanf("%s", str);
    fptr2 = fopen(str, "w");
    if (fptr2 == NULL)
        printf("No such file \n");
    else{
        display(str);
         ch = fgetc(fptr1);
    while (ch != EOF)
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }
    printf("\n\tContents Copied!\n");
    fclose(fptr1);
    fclose(fptr2);
     display(str);
    }
 }
}
