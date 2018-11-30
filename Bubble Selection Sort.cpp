#include<iostream>
using namespace std;


void display(int A[10], int n)
 {
     int i;
      for(i=0;i<n;i++)
       cout<<A[i]<<" ";
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
     cout<<"Enter number of elements of the Array: ";
     cin>>n;
     cout<<"Enter the elements of the Array: ";
     for(i=0;i<n;i++)
       cin>>A[i];

     while(1)
     {
         cout<<"\n\n1) Selection Sort ";
         cout<<"\n2) Bubble Sort ";
         cout<<"\n3) Exit ";
         cout<<"\n\n Enter Option: ";
         cin>>op;
           switch(op)
            {
                case 1: cout<<"\n Initial Array:  ";
                        display(A,n);
                        SelectionSort(A,n);
                        cout<<"\n After Sorting :  ";
                        display(A,n);
                        break;
                case 2: cout<<"\n Initial Array:  ";
                        display(A,n);
                        BubbleSort(A,n);
                        cout<<"\n After Sorting :  ";
                        display(A,n);
                        break;
                case 3:exit(1);
                default:  cout<<"\n Wrong Option!!";
            }
     }
 }


