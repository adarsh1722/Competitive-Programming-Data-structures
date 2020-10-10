#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;

};

struct node* front = 0;
struct node* rear = 0;


// displaying element
void display()
{
   struct node* temp=front;

    if(front ==0 && rear ==0)
    {
       printf("empty\n");
       return;
    }

    printf("list is==> ");
    while(temp->next!=front)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }

    printf("%d ",temp->data);

    printf("\n");

    return;
    
    

   

   printf("\n");
    
}

// inserting element
void insert()
{
   struct node* newnode=(struct node*)malloc(sizeof(struct node));

   printf("enter data\n");
   int x;
   scanf("%d",&x);

   newnode->data=x;
   newnode->next=0;
   if(rear==0)
   {
      front=newnode;
      rear=newnode;
      rear->next=front;
   }
   else
   {
      rear->next=newnode;
      rear=newnode;
      rear->next=front;
   }
   
   display();
   
    

}

// deleting element
void delete()
{
    if(front==0 && rear == 0)
    {
       printf("underflow\n");
    }
    if(front==rear)
    {
      struct node* temp=front;
       front=0;
       rear=0;
       free(temp);
    }
    else
    {
         struct node* temp=front;
         front=front->next;
         rear->next=front;
         free(temp);
    }
  
  display();

    

}

// finding peek element
void peek()
{
   if(front==0 && rear==0)
   {
      printf("empty\n");
   }
   else
   {
      printf("%d",front->data);
   }
   
   
}


int main()
{
    int choice;

    while(1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.peek\n");
        printf("5.exit\n");
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
            peek();
            break;
            case 5:
            exit(1);
            default:
            printf("wrong choice\n");

        }


    }


}