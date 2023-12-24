#include <iostream>
using namespace std;

struct LinkedList
{
    int info;
    struct LinkedList *next;
};

typedef struct LinkedList SLL;
SLL *first=NULL;


void insert(int data)
{
    
    // cout<<"Enter the data to insert:";
    // cin >> data;
    SLL *temp;
    temp=(SLL*)malloc(sizeof(SLL));
    temp->info=data;
    temp->next=first;
    first=temp;
}

void insertInLast(int data)
{
    // int data;
    // cout<<"Enter the data to insert:";
    // cin >> data;
     SLL *temp;
    temp=(SLL*)malloc(sizeof(SLL));
     SLL *p;
    temp->info=data;
    p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
        
    p->next=temp;
    temp->next=NULL;
}

void insertInNth(int data,int n)
{
    //  int data;
    // cout<<"Enter the data to insert:";
    // cin >> data;
    // int n;
    // cout<<"Insert the position to be inserted:";
    // cin>>n;
     SLL *temp;
     temp=(SLL*)malloc(sizeof(SLL));

    SLL *p;
    temp->info=data;
    p=first;
    while(n>2)
    {
        p=p->next;
        n--;
    }

    temp->next=p->next;
    p->next=temp;
}

void deletion()
{
    SLL *temp;
    temp=first;
    first=first->next;
    free(temp);
}

void deletionInLast()
{
    SLL *temp,*p;
    p=first;

    while(p->next->next !=NULL)
    {
        p=p->next;
    }
    temp=p->next;
    p->next=NULL;
    free(temp);
}

void deletionInNth(int n)
{
    // int n;
    // cout<<"Enter the position of the node to be deleted: ";
    // cin>>n;

    SLL *temp,*p;
    p=first;
    while(n>2)
    {
        p=p->next;
        n--;
    }
    temp=p->next;
    p->next=p->next->next;
    free(temp);  
}

void display()
{
    SLL *p;
    p=first;

    while(p->next !=  NULL)
    {
        cout<<p->info<<"--> ";

        p=p->next;
        
    }
    cout<<p->info<<"-->NULL ";
     cout<<endl; 
}

int main()
{
   

        insert(4);
        display();
        insert(5);
        display();
        insertInNth(3,1);
        display();
        insertInLast(6);
        display();
        deletionInNth(2);
        display();
         deletion();
        display();
        deletionInLast();
        display();
    
}