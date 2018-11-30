#include<stdio.h>


void display(int A[10], int n)
 {
     int i;
      for(i=0;i<n;i++)
        printf("%d ",A[i]);
 }

void SelectionSort(int A[10], int n)
  {
      int i,j,iMin,temp;
         for(i=0;i<n-1;i++)
         {
            iMin=i;
              for(j=i+1;j<n;j++)
              {
                  if(A[j]<A[iMin])
                    iMin=j;
              }
              temp=A[i];
              A[i]=A[iMin];
              A[iMin]=temp;
         }
  }



void BubbleSort(int A[10], int n)
 {
    int i,j,flag,temp;
      for(i=0;i<n-1;i++)
      {
          flag=0;
           for(j=0;j<n-i-1;j++)
           {
               if(A[j]>A[j+1])
               {
                    temp=A[j];
                     A[j]=A[j+1];
                     A[j+1]=temp;
                     flag=1;
               }
           }
         if (flag==0)
            break;
      }
 }



int main()
 {
     int op,i,n,A[100];
     printf("Enter number of elements of the Array: ");
     scanf("%d",&n);
     printf("Enter the elements of the Array: ");
     for(i=0;i<n;i++)
       scanf("%d",&A[i]);

     while(1)
     {
         printf("\n\n1) Selection Sort ");
         printf("\n2) Bubble Sort ");
         printf("\n3) Exit ");
         printf("\n\n Enter Option: ");
         scanf("%d",&op);
           switch(op)
            {
                case 1: printf("\n Initial Array:  ");
                        display(A,n);
                        SelectionSort(A,n);
                        printf("\n After Sorting :  ");
                        display(A,n);
                        break;
                case 2: printf("\n Initial Array:  ");
                        display(A,n);
                        BubbleSort(A,n);
                        printf("\n After Sorting :  ");
                        display(A,n);
                        break;
                case 3:exit(1);
                default:  printf("\n Wrong Option!!");
            }
     }
 }


