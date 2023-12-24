#include <iostream>
using namespace std;
#define max 5

class Queue
{
    private:

        int ele[max];
        int front=-1;
        int rear=-1;

    public:

    void enqueue()
    {
        int item;
      

        if(rear==max-1)
        {
            cout<<"Queue is full!"<<endl;
        }

        else 
        {
              cout<<"Enter the number to enqueue: "<<endl;
              cin>>item;
            
              if(front==-1)
              {
                front=0;
              }
                rear=rear+1;
        ele[rear]=item;

        cout<<item<<" is successfully enqueued"<<endl;
        }
      
    }

    void dequeue()
    {
        int item;
        if(rear==front==-1)
        {
            cout<<"Queue is Empty!"<<endl;
        }

        ele[front]=item;

        if(rear==front)
        {
            rear=front=-1;
        }

        else 
        {
            front=front+1;
            // ele[front]=item;
        }
        
        cout<<item<<"is successfully dequeued"<<endl;
    }

    void display()
    {
        if(front==-1|| front>rear)
        {
            cout<<"queue is empty"<<endl;
        }

        else
        {
            cout<<"Queue elements are:\n";
            for(int i=front;i<=rear;i++)
            {
                cout<<"\n"<<ele[i];
            }
            cout<<endl;
        }
    }
    
};

int main()
{
    Queue q;
    int choice;
    while(1)
    {
        cout<<"Enter\n1.For enqueue\n2.For dequeue\n3.For displaying queue\n4.For exit"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: 
            q.enqueue();
            break;

            case 2:
            q.dequeue();
            break;

            case 3:
            q.display();
            break;

            case 4:
            return 0;

            default:
            cout<<"Wrong input."<<endl;
        }
    }
    return 0;
}
