#include <iostream>
using namespace std;
#define max 5

class Queue
{
    private:
    int rear=-1;
    int front=-1;
    int ele[max];

    public:
    void enqueue(int item)
    {
        

        if(front==(rear+1)%max || (front==0 && rear==max-1))
        {
            cout<<"Queue is full!!\n";
        }

         
        // else if(front=-1)
        // {
        //      cout<<"Enter the number to be enqueued:"<<endl;
        //     cin>>item;

        //     front=rear=0;
        //     ele[rear]=item;
        // }

        // else if(rear==max-1 && front!=0)
        // {
        //      cout<<"Enter the number to be enqueued:"<<endl;
        //     cin>>item;

        //     rear=0;
        //     ele[rear]=item;
        // }


        
        else if(rear==front==-1)
        {
            front=front+1;
        }

        else if(rear==max-1 && front!=0)
        {
            rear=0;
            ele[rear]=item;
        }

        else
        {
            // cout<<"Enter the number to be enqueued:";
            // cin>>item;

            
        rear=(rear+1)%max;
        ele[rear]=item;

        // cout<<item<<" is enqueued successfully."<<endl;
        }
       
    }

    int dequeue()
    {
        int item;

        if(rear==front==-1)
        {
            cout<<"Queue is empty!!";
            return INT_MIN;
        }

        item=ele[front];
        ele[front]=-1;
        if(rear==front)
        {
            rear=front=-1;
        }

        else
        {
            front=(front+1)%max;
        }
        return item;
        // cout<<ele[front]<<"is dequeued successfully."<<endl;
    }

    void display()
    {
        front=front+1;
        if(front==-1)
        {
            cout<<"Queue is empty!!"<<endl;
        }

        
        else
        {
            // front=front+1;
            cout<<"Queue elements are:"<<endl;
            if(rear>=front)
            {
                for(int i=(front);i<=rear;i++)
                {
                    cout<<ele[i]<<endl;
                }
            }

          else
            {
                for(int i=(front);i<max;i++)
                {
                    cout<<ele[i];
                }

                for(int i=0;i<=rear;i++)
                {
                    cout<<ele[i];
                }
            }  
        }     
    }

};

int main()
{
    // Queue q;
    // int choice;

    // while(1)
    // {
    //     cout<<"Enter\n1.For enqueue\n2.For dequeue\n3.For displaying queue\n4.For exit"<<endl;
    //     cin>>choice;

    //     switch(choice)
    //     {
    //         case 1: 
    //         q.enqueue();
    //         break;

    //         case 2:
    //         q.dequeue();
    //         break;

    //         case 3:
    //         q.display();
    //         break;

    //         case 4:
    //         exit(0);

    //         default:
    //         cout<<"Wrong input."<<endl;
    //     }
    // }

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    // q.display();
    q.enqueue(3);
    // q.display();
    q.enqueue(4);
    // q.display();
    // q.dequeue();
    // q.display();
    // q.dequeue();
    // q.display();
    q.enqueue(5);
    q.display();
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}