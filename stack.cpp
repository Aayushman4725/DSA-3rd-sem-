#include <iostream>
using namespace std;
int tos=-1;
int stack[5];
int item;
void push()
{   
    if(tos==5-1)
    {
        cout<<"Stack is full!!";
        
    }

    else
    {
        cout<<"Enter the number to be pushed:";
        cin>>item;
        tos=tos+1;
        stack[tos]=item;
        
    }
}

void pop()
{
    if(tos==-1)
    {
        cout<<"\nStack is empty!"<<endl;
        
    }

    else
    {
        cout<<"The number to be popped is:"<<tos<<endl;
        tos=tos-1;
        
    }
} 

void display()
{
    int i;
    if(tos==-1)
    {
        cout<<"\nStack is empty";
        
    }
    else
    {
        for(i=tos;i>=0;--i)
        {
            cout<<"\n"<<stack[i];
            
        }
    }
}

int main()
{
    int choice;

    
    
    while(1)
    {
        cout<<"\n\n\nEnter number from 1-4 for following operations:\n1. push\n2. pop\n3. display\n4. exit\nchoice:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;
            default:cout<<"Wrong choice!!";
        }
    }

    return 0;
}