#include<iostream>
using namespace std;
void insert(int *f,int *r,int a[],int val,int n)
{
    if(*r==n-1)
    {
        cout<<"\nQueue is overflow";
    }
    else
    {
        (*r)++;
        a[*r]=val;
        cout<<a[*r]<<" is INserted into queue";
        if((*r)==0)
        {
            *f=0;
        }

    }
}
void display(int *f,int *r,int a[])
{
    if(*r==-1)
    {
        cout<<"Queue is Empty";
    }
    else
    {
            int i;
        for(i=*f;i<=*r;i++)
        {
            cout<<"\n"<<a[i];
        }
    }
}
void del(int *f, int *r,int a[])
{
    if(*r==-1)
    {
        cout<<"Queue is Underflow";
    }
    else
    {
            cout<<a[*f]<<" i deleted from the queue";
            (*f)++;
            if(*f>*r)
            {
                *f=-1;
                *r=-1;
            }
    }
}
int main()
{
    int n;
    cout<<"Enter Size of Stack :";
    cin>>n;
    int f=-1,r=-1,a[n],choice,val;
    while(1)
    {
        cout<<"\n1.insert\n2.delete\n3.display\n4.exit";
        cout<<"\nEnter Your Choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
                    cout<<"\n\nEnter Value You Want to Insert:";
                    cin>>val;
                    insert(&f,&r,a,val,n);
                    break;
            case 2:
                    del(&f,&r,a);
                    break;
            case 3:
                    display(&f,&r,a);
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    cout<<"Enter valds choice";
                    break;
        }
    }

}
