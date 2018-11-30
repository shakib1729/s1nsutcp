#include <stdio.h>

void main()
{
   int arr[100],i,n,flag=0,start,end,mid,item;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements of array(ascending order): ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("\nEnter Element to search: ");
    scanf("%d",&item);

    start=0;
    end=n-1;
    while(start<=end){
        mid=(start+end)/2;
         if(arr[mid]==item){
            flag=1;
            break;
         }
         else if(item>arr[mid])
                 start=mid+1;
         else
                end=mid-1;
    }
    if(flag==1)  printf("\nElement found at Position: %d\n",mid+1);
    else printf("\nElement not found\n");
}
