#include<iostream>
using namespace std;
void push(int *ptr,int a[],int val)
{
    if(*ptr==4)
    {
        cout<<"STack is Overflow";

    }
    else{
        (*ptr)++;
        a[*ptr]=val;
        cout<<a[*ptr]<<" is Pushed into Stack";
    }
}
void pop(int *ptr,int a[])
{
    if(*ptr<0)
    {
        cout<<"Stack is Underflow";
    }
    else
    {
        cout<<a[*ptr]<<" Is Poped from the stack";
        (*ptr)--;
    }
}
void peep(int *ptr,int s[])
{
    if(*ptr==-1)
    {
        cout<<"Stack is Empty";
    }
    else
    {
        cout<<s[*ptr]<<" on Top";
    }
}
void display(int *ptr,int s[])
{
        int tem,i;
    if(*ptr==-1)
    {
        cout<<"\n Nothing in the Stack";

    }
    else{
            for(i=*ptr;i>=0;i--)
            {
                cout<<s[i]<<"\n";
            }
    }
}
int main()
{
    int choice,top=-1,val,a[5];
    while(1)
    {
        cout<<"\n1.Push\n2.Pop\n3.Peep\n4.Display\n5.exit";
        cout<<"\nEnter Your Choice:";
        cin>>choice;


        switch(choice)
        {
            case 1:
                    cout<<"\nEnter VAlue You WAnt to Insert:";
                    cin>>val;
                    push(&top,a,val);
                    break;
            case 2:
                    pop(&top,a);
                    break;
            case 3:
                    peep(&top,a);
                    break;
            case 4:
                    display(&top,a);
                    break;
            case 5:
                    exit(0);
                    break;
            default:
                    cout<<"Enter VAlid Choice";
                    break;
        }
    }
    return 0;
}

