#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void main()
{
	clrscr();
	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *nnode=NULL;

	for (int i=0;i<5;i++)
	{
		nnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter The Data of the %d Node :",i+1);
		scanf("%d",&nnode->data);
		nnode->next=NULL;

		if(head == NULL)
		{
			head=nnode;
			temp=nnode;
		}
		else
		{
			temp->next=nnode;
			temp=nnode;
		}

	}
	temp=head;
	while(temp!=NULL)
	{
	       printf("%d",temp->data);
	       temp=temp->next;
	}
	getch();
}
