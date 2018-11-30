#include<stdio.h>


struct node
{
	int info;
	struct node *next;
}*head;


void create_list();
void display();


void addatbeg(int data);
void addatend(int data);
void addafter(int data,int item);
void delbeg();
void delend();
void delloc(int data);

void search(int data);
void count();


main()
{

	int choice,data,item,pos;
	printf("SINGLE LINKED LIST\n");
	while(1)
	{
		printf("\n1.Create List\n");
		printf("2.Display\n");


		printf("3.Add at beginning\n");
		printf("4.Add at end\n");
		printf("5.Add after node\n");
		printf("6.Deletion from beginning\n");
        printf("7.Deletion from End\n");
		printf("8.Deletion from Location\n");
		printf("9.Search an Element\n");
		printf("10.Count number of Elements\n");

		printf("11.Quit\n\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			create_list();
			break;
		 case 2:
			display();
			break;
		 case 3:if(head==NULL) printf("First Create List");
		 else{
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			addatbeg(data);}
			break;
		 case 4: if(head==NULL) printf("First Create List");
		 else
         {


			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			addatend(data);
         }
			break;
		 case 5:if(head==NULL) printf("First Create List");
		 else {
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("Enter the element after which to insert : ");
			scanf("%d",&item);
			addafter(data,item);}
			break;

			 case 6:if(head==NULL) printf("First Create List");
			 else {
			     delbeg();}
			        break;

             case 7:if(head==NULL) printf("First Create List");
                else { delend(); }
                    break;
		 case 8: if(head==NULL) printf("First Create List");
		 else{
			printf("Enter the loc: ");
			scanf("%d",&data);
			delloc(data); }
			break;
			 case 9: if(head==NULL) printf("First Create List");
		 else{
			printf("Enter the element to search: ");
			scanf("%d",&data);
			search(data); }
			break;
			 case 10: if(head==NULL) printf("First Create List");
		 else{
			  count();
			 }
			break;
		 case 11:
			 exit(1);
		 default:
			 printf("Wrong choice\n");

		}/*End of switch */
	}/*End of while */
}/*End of main()*/

void create_list()
{
	int data;
	head=NULL;
	printf("Enter the first Element : ");
	scanf("%d",&data);
	 addatbeg(data);
}/*End of create_list()*/
void display()
{
	struct node *p;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=head;
	printf("List is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->next;
	}
	printf("\n\n");
}/*End of display() */


void addatbeg(int data)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->info=data;
	ptr->next=head;
	head=ptr;

}/*End of addatbeg()*/
void addatend(int data)
{
	struct node *list,*ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->info=data;
	list=head;
	while(list->next!=NULL)
		list=list->next;
	list->next=ptr;
	ptr->next=NULL;

}/*End of addatend()*/
void addafter(int data,int item)
{
	struct node *ptr,*p;
	p=head;
	while(p->info!=item)
	 p=p->next;
        ptr=(struct node *)malloc(sizeof(struct node));
			ptr->info=data;
			ptr->next=p->next;
			p->next=ptr;


}/*End of addafter()*/

void delbeg()
 {
     struct node *ptr;
     ptr=head;
     head=ptr->next;
     free(ptr);

 }

 void delend()
  {
      struct node *list,*list1;
      list=head;
      list1=head;
      while(list->next!=NULL)
      {

        list1=list;
		list=list->next;
      }
      list1->next=NULL;
      free(list);

  }





void delloc(int data)
{
     struct node *list,*list1;
      list=head;
      list1=head;
      while(list->info!=data)
      {

        list1=list;
		list=list->next;
      }
      	list1->next=list->next;
      	free(list);
}


void search(int data){
    int flag=0,pos=0;
    struct node *list=head;
    while(list!=NULL){
        if(list->info==data){
            flag=1;
            break;
        }
        list=list->next;
        pos++;
    }
    if(flag==1) printf("Element found at Position: %d",pos+1);
    else printf("Element not found");
}

void count(){
    int count=0;
    struct node *list=head;
    while(list!=NULL){
        list=list->next;
        count++;
    }
  printf("Number of Nodes: %d",count);
}
