#include<stdio.h>

int checkArmstrong(int num){

 double digits=0,i,sum=0;
 int num2=num;
 int num3=num;

  while(num2>0){
    num2/=10;
    digits++;
  }

  while(num3>0){
     i=num3%10;
      sum+=pow(i,digits);
      num3/=10;
  }

  if(sum==num) return 1;
  return 0;
}

void main(){

int a,b,i,flag;
printf("Enter the range: ");
scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
      flag=checkArmstrong(i);
       if(flag==1)
         printf("%d ",i);
    }

}
