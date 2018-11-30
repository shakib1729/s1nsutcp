#include <stdio.h>

int n;

void insert(int n,int arr[]){
    int pos,value,i;
printf("\nEnter the Position where to insert the Element: \n");
   scanf("%d", &pos);
   printf("Enter the value to insert\n");
   scanf("%d", &value);

    for (i=n-1;i>= pos-1;i--)
      arr[i+1]=arr[i];
    arr[pos-1]=value;
    n++;
     printf("New array is: ");
        for (i=0;i<n;i++)
      printf("%d ",arr[i]);
}


void delete(int n,int arr[]){
        int pos,value,i;
        printf("\nEnter the Position from where to delete the Element: \n");
        scanf("%d", &pos);
        if(pos>n) printf("\nThe entered position is greater than the number of elements in the array \n");
        else{
            for(i=pos-1;i<n;i++)
                arr[i]=arr[i+1];
        }
        n--;
         printf("New array is: ");
        for (i=0;i<=n;i++)
      printf("%d ",arr[i]);
}

void main()
{
   int arr[100],i,op;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements of array: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    while(1){
        printf("\n1) Insertion\n");
        printf("2) Deletion\n");
        printf("3) Exit");
        printf("\nEnter option: ");
        scanf("%d",&op);
        switch(op){
            case 1: insert(n,arr);
                    break;
            case 2: delete(n,arr);
                    break;
            case 3: exit(1);
            default: printf("Wrong Option!\n");
        }
    }
}
