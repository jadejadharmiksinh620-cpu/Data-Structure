#include<stdio.h>
#include<conio.h>
void main()
{
	int s[5],i,found=0,search;
	clrscr();
	printf("_________Enter Any 5 Number________");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Number :",i+1);
		scanf("%d",&s[i]);
	}
	printf("Enter Value You Want to Search :");
	scanf("%d",&search);
	for(i=0;i<5;i++)
	{
		if(s[i]==search)
		{
			found++;
		}
	}
	printf("%d Is Found %d TImes ",search,found);
	getch();
}


