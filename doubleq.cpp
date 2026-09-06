#include<iostream>
using namespace std;
void insert(int *rear1,int *front1,int *rear2,int *front2,int val,int q[],int n)
{
    int opt;
     cout<<"\nEnter in Which Queue you want to inserted a value:";
     cin>>opt;

    if(opt==1)
    {
        if(*rear1==*rear2-1)
        {
            cout<<"Queue1 is Overflow";
        }
        else{
            (*rear1)++;
            q[*rear1]=val;
            cout<<val<<" Is Inserted into queue";
            if(*rear1==0)
            {
                *front1=0;
            }
        }
    }

    else if(opt==2)
    {
        if(*rear2==*rear1+1)
        {
            cout<<"Queue2  is overflow";
        }
        else{
            (*rear2)--;
            q[*rear2]=val;
            cout<<val<<" IS Inserted into queue2";
            if(*rear2==n-1)
            {
                (*front2)--;
            }

        }
    }
    else{
        cout<<"Enter VAlid Choice";
    }

}
void display(int *rear1,int *front1,int *rear2,int *front2,int q[],int n)
{
    int opt;
    cout<<"\nEnter WHich Queue you want to DIsplay:";
    cin>>opt;
    if(opt==1)
    {
        if(*front1==-1)
        {
            cout<<"Queue 1 is Empty";
        }
        else{
            for(int i=*front1;i<=(*rear1);i++)
            {
                cout<<"\n"<<q[i];
            }
        }
    }
    else if(opt==2)
    {
        if(*front2==n)
        {
            cout<<"Queue 2 Is Empty";
        }
        else{
            for(int i=*front2;i>=(*rear2);i--)
            {
                cout<<"\n"<<q[i];
            }
        }
    }
    else{
        cout<<"Enter Only 1 or 2";
    }
}
void del(int *rear1,int *front1,int *rear2,int *front2,int q[],int n)
{
    int opt;
    cout<<"Enter it which queue you want to delete the element :";
    cin>>opt;
    if(opt==1)
    {
        if(*front1==-1)
        {
            cout<<"Queue is Underflow";
        }
        else
        {
                cout<<q[*front1]<<" deleted fro, the queue";
                (*front1)++;
                if((*front1)>(*rear1))
                {
                    *front1=-1;
                    *rear1=-1;
                }
        }
    }
    else if(opt==2){
        if(*front2==n)
        {
            cout<<"Queue is underflow";

        }
        else{
                (*front2)--;
                cout<<q[*front2]<<" deleted from the queue 2";
                if(*front2<*rear2)
                {
                    *front2=n;
                    *rear2=n;
                }

        }
    }
}
int main()
{
    int n;
    cout<<"\nEnter The Size of Array:";
    cin>>n;
    int rear1=-1,front1=-1,rear2=n,front2=n,choice,val,q[n];
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.exit";
         cout<<"\nEnter Your choice";
        cin>>choice;

        switch(choice)
        {
            case 1:
                
                    cout<<"Enter Value You Want TO inserted:";
                    cin>>val;
                    insert(&rear1,&front1,&rear2,&front2,val,q,n);
                    break;

            case 2:
                    del(&rear1,&front1,&rear2,&front2,q,n);
                    break;

            case 3:
                    display(&rear1,&front1,&rear2,&front2,q,n);
                    break;
            default:
                    cout<<"Enter Valid choice";
                    break;
        }
    }
    return 0;

}