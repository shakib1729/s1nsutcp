#include<stdio.h>

void DTB(){
    int binary[100],decimal,i=0,rem,j;
     printf("\nEnter A Decimal Number: ");
    scanf("%d",&decimal);

     while(decimal>0){
        rem=decimal%2;
        binary[i++]=rem;
        decimal/=2;
     }
    printf("In Binary: ");
    for(j=i-1;j>=0;j--)
         printf("%d ",binary[j]);
}

void BTD(){
    int binary,decimal=0,i=0,rem,j;
    printf("\nEnter A Binary Number: ");
    scanf("%d",&binary);
     while(binary>0){
        rem=binary%10;

         if(rem!=0)
            decimal+=rem*pow(2,i++);
        else i++;

         binary/=10;
     }
      printf("In Decimal: %d",decimal);

}


void main(){
 int op;
 while(1){

    printf("\nEnter Option:\n 1)Decimal to Binary\n 2)Binary to Decimal\n 3)Exit\n");
 scanf("%d",&op);

 switch(op){
  case 1: DTB();
            break;
  case 2: BTD();
            break;
  case 3: exit(1);
            break;
  default: printf("Wrong Option");
 }

}
}
