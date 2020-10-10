#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;

};

struct node* front = 0;
struct node* rear = 0;

void display()
{
    struct node* temp;
    if(front == 0 && rear ==0)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=front;
        printf("list is :\n");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
        
    }
    return;
    
}



void insert()
{
    int x;
    printf("enter data\n");
    scanf("%d",&x);
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;

    if(front == 0 && rear == 0)
    {
        front = newnode;
        rear = newnode;

    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    display();
    

}

void delete()
{
    if(front==0 && rear == 0)
    {
        printf("list is empty\n");

    }
    struct node* temp=front;
    front=front->next;
    free(temp);


}


int main()
{
    int choice;

    while(1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("wrong choice\n");

        }


    }


}