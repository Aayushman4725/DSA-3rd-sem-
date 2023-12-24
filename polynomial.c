#include <stdio.h>
#include <conio.h>

struct node
{
    int coeff;
    int expo;
    struct node *link;
};

struct node *first;

void main()
{
    void create();
    traverse();
    create();
    traverse();
    add();
    getch();
}

void create()
{
    struct node *ptr,*cpt;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter coeff and expo:");
    scanf("%d%d",&ptr->coeff,&ptr->expo);
    first=ptr;
    do
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("Input next term:");
        scanf("%d%d",&cpt->coeff,&cpt->expo);
        ptr->link=cpt;
        ptr=cpt;
        printf("Press <Y/N> for more nodes:\n");
        ch=getch();
    }
    while(ch=='Y');
    ptr->link=NULL;
}

void traverse()
{
    struct node *ptr;
    printf("terms of polynomials:\n");
    ptr=first;

    while(ptr!=NULL)
    {
        printf("%d",ptr->coeff);
        printf("x^");
        printf("%d+",ptr->expo);
        ptr=ptr->link;
    }

   
}

void add()
{
    struct node *ptr1;
    struct node *ptr2;
    struct node *result;

    if((ptr1->expo)==(ptr2->expo))
    {
        ptr1->coeff+=ptr2->coeff;
        result->coeff=ptr1->coeff;
    }

    printf("%d" ,result->coeff,"x^%d",ptr1->expo);
    result=result->link;
    
     getch();
}
