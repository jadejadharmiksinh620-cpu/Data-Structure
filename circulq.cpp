#include<iostream>
using namespace std;
void insert(int *top,int *rear,int cq[],int val,int n)
{
    if(*top==0 && *rear==n-1 || *rear+1==*top)
    {
        cout<<"Queue is Overflow--!";
    }
    else{
        if(*rear==-1 && *top==-1)
        {
            *rear=0;
            *top=0;
        }
        else if(*rear==n-1)
        {
            *rear=0;
        }
        else{
            (*rear)++;
        }
        cq[*rear]=val;
        cout<<cq[*rear]<<" Inserted Into Queue ";
    }
}
void display(int *top,int *rear,int cq[],int n)
{
    if(*top==-1)
    {
        cout<<" Queue Is Empty --!";
    }
    else{
        int i=*top;
        while(1)
        {
            cout<<"\n"<<cq[i];
            if(i==*rear)
            {
                break;
            }
            i =(i +1)%n;
        }    
    }
}
void del(int *top,int *rear,int cq[],int n)
{
    if(*top==-1)
    {
        cout<<"Queue is Underflow ";
    }
    else{
         cout<<cq[*top]<<" Deleted from the Queue !!";
        if(*top==*rear)
        {
            *top=-1;
            *rear=-1;
        }
        else if(*top==n-1)
        {
            *top=0;
        }
        else{
            (*top)++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter The Size of the Array :";
    cin>>n;
    int top=-1,rear=-1,choice,val,cq[n];    
    while(1)
    {
            
          cout<<"\n1.insert\n2.Delete\n3.Display\n4.Exit:";
         cout<<"Enter Yur Choice :";
         cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\nEnter Value you want to inserted :";
                cin>>val;
                insert(&top,&rear,cq,val,n);
                break;
            case 2:
                del(&top,&rear,cq,n);
                break;
            case 3:
                display(&top,&rear,cq,n);
                break;
            default:
                cout<<"Enter Valid Choice:";
                break;
        }
    }
        return 0;
}