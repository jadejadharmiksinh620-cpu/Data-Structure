#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	struct node *lptr;
	int data;
	struct node *rptr;
};
struct node *head=NULL;
void insert_begin(int val)
{
	struct node *nd;
	nd=(struct node *)malloc(sizeof(struct node));
	nd->data=val;
	nd->lptr=NULL;
	nd->rptr=head;
	if(head!=NULL)
	{
		head->lptr=nd;
	}
	head=nd;
	cout<<head->data<<" is Insert At Begin ";
}
void display()
{
	struct node *temp=head;
	if(head==NULL)
	{
		cout<<"List is Empty ";
	}
	while(temp!=NULL)
	{
		if(temp->rptr->rptr==NULL)
		{
			cout<<"NULL";
		}
		cout<<temp->data<<"->";
		temp=temp->rptr;
	}

}
void display_back()
{
	struct node *temp;
	if(head==NULL)
	{
		cout<<"list Is Empty ";
	}
	temp=head;
	while(temp->rptr!=NULL)
	{
		temp=temp->rptr;
	}

	while(temp!=NULL)
	{
		if(temp->rptr==NULL)
		{
			cout<<"NULL";
		}
		cout<<"<-"<<temp->data;
		temp=temp->lptr;

	}
}
void main()
{
	int ch,val;
	clrscr();
	while(1)
	{
		cout<<"\n1.Insert Begin\n4.Dsiplay5.Display_Backward\n6.exit";
		cout<<"Enter Your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Number For Insert :";
				cin>>val;
				insert_begin(val);
				break;
			case 4:
				display();
				break;
			case 5:
				display_back();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Enter Valid Choice :";
				break;
		}
	}
}