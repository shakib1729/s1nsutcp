#include<iostream>
using namespace std;

struct node
{
	int info;
	 node *next;
}*head;

class LinkedList{
 public:
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
}L;



void insertion(){
  int choice,data,item,pos;
    cout<<"1.Add at beginning\n";
		cout<<"2.Add at end\n";
		cout<<"3.Add after node\n";
		cout<<"Enter Choice: ";
		cin>>choice;
		switch(choice){
		  case 1:
		     if(head==NULL) cout<<"First Create List";
		 else{
			cout<<"Enter the element to be inserted : ";
			cin>>data;
			L.addatbeg(data);}
			break;
		 case 2: if(head==NULL) cout<<"First Create List";
		 else
         {
			cout<<"Enter the element to be inserted : ";
			cin>>data;
			L.addatend(data);
         }
			break;
		 case 3:if(head==NULL) cout<<"First Create List";
		 else {
			cout<<"Enter the element to be inserted : ";
			cin>>data;
			cout<<"Enter the element after which to insert : ";
			cin>>item;
			L.addafter(data,item);}
			break;
         default:  cout<<"Wrong Option!!!";
		}


}

void deletion(){
 int choice,data,item,pos;

    cout<<"1.Deletion from beginning\n";
        cout<<"2.Deletion from End\n";
		cout<<"3.Deletion from Location\n";
		cout<<"Enter Choice: ";
		cin>>choice;

		switch(choice){
            case 1:if(head==NULL) cout<<"First Create List";
			 else {
			     L.delbeg();}
			        break;

             case 2:if(head==NULL) cout<<"First Create List";
                else { L.delend(); }
                    break;
		 case 3: if(head==NULL) cout<<"First Create List";
		 else{
			cout<<"Enter the loc: ";
			cin>>data;
			L.delloc(data); }
			break;
			 default:  cout<<"Wrong Option!!!";
		}

}

main()
{

	int choice,data,item,pos;
	cout<<"\tLINKED LIST\n";
	while(1)
	{
		cout<<"\n1.Create List\n";
		cout<<"2.Display\n";
        cout<<"3.Insertion\n";
        cout<<"4.Deletion\n";
        cout<<"5.Searching\n";
        cout<<"6.Count number of Elements\n";
		cout<<"7.Quit\n\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
		 case 1: L.create_list();
			break;

		 case 2: L.display();
			break;

		 case 3:  insertion();
                break;
         case 4: deletion();
			        break;
			 case 5: if(head==NULL) cout<<"First Create List";
		 else{
			cout<<"Enter the element to search: ";
			cin>>data;
			L.search(data); }
			break;
			 case 6: if(head==NULL) cout<<"First Create List";
		 else{
			  L.count();
			 }
			break;
		 case 7:
			 exit(1);
		 default:
			 cout<<"Wrong choice\n";

		}/*End of switch */
	}/*End of while */
}/*End of main()*/

void LinkedList::create_list()
{
	int data;
	head=NULL;
	cout<<"Enter the first Element : ";
	cin>>data;
	 L.addatbeg(data);
}/*End of create_list()*/
void LinkedList:: display()
{
	 node *p;
	if(head==NULL)
	{
		cout<<"List is empty\n";
		return;
	}
	p=head;
	cout<<"List is :\n";
	while(p!=NULL)
	{
		cout<<" "<<p->info;
		p=p->next;
	}
	cout<<"\n\n";
}/*End of display() */


void  LinkedList::addatbeg(int data)
{
	 node *ptr;
	ptr=new node;
	ptr->info=data;
	ptr->next=head;
	head=ptr;

}/*End of addatbeg()*/
void  LinkedList::addatend(int data)
{
	 node *list,*ptr;
	ptr=new node;
	ptr->info=data;
	list=head;
	while(list->next!=NULL)
		list=list->next;
	list->next=ptr;
	ptr->next=NULL;

}/*End of addatend()*/
void  LinkedList::addafter(int data,int item)
{
	 node *ptr,*p;
	p=head;
	while(p->info!=item)
	 p=p->next;
        ptr=new node;
			ptr->info=data;
			ptr->next=p->next;
			p->next=ptr;


}/*End of addafter()*/

void  LinkedList::delbeg()
 {
      node *ptr;
     ptr=head;
     head=ptr->next;
     delete ptr;

 }

 void  LinkedList::delend()
  {
       node *list,*list1;
      list=head;
      list1=head;
      while(list->next!=NULL)
      {
        list1=list;
		list=list->next;
      }
      list1->next=NULL;
      delete list;

  }





void  LinkedList::delloc(int data)
{
      node *list,*list1;
      list=head;
      list1=head;
      while(list->info!=data)
      {

        list1=list;
		list=list->next;
      }
      	list1->next=list->next;
      	delete list;
}


void  LinkedList::search(int data){
    int flag=0,pos=0;
     node *list=head;
    while(list!=NULL){
        if(list->info==data){
            flag=1;
            break;
        }
        list=list->next;
        pos++;
    }
    if(flag==1) cout<<"Element found at Position: "<<pos+1;
    else cout<<"Element not found";
}

void  LinkedList::count(){
    int count=0;
     node *list=head;
    while(list!=NULL){
        list=list->next;
        count++;
    }
  cout<<"Number of Nodes: "<<count;
}
