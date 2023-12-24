#include <iostream>
using namespace std;

struct linked_list
{
    int info;
    struct linked_list *next;
};

class Linked
{
    private:
    typedef struct linked_list SLL;

    SLL *first=NULL;
    SLL *p;
    public:
    void insert(int data)
    {
         p=(SLL *)malloc(sizeof(SLL));
        //  p->info=5;
        //  p->next->info=7;
        //  p->next->next->info=9;
        //  p->next->next->next=NULL;
        // if(first==nullptr)
        // {
        //     first=p;
        // }
        
            
            p->info=data;
            p->next=first;
            first=p;
              
    }

    void display()
    {
        cout<<"The data of linked list are:";
        p=first;
        while(p->next!=NULL)
        {
            cout<<p->info<<" ";
            p=p->next;
            
        }

       

    }
};

int main()
{
    Linked l;

    l.insert(5);
    l.insert(7);
    l.insert(9);
    l.display();
    return 0;
}

