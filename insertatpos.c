#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;//globally declared head

//  inserting a node into list
void insert(int x)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;


}

void insertatpos()
{
    printf("enter position:\n");
    int pos;
    scanf("%d",&pos);
    int x;
    printf("enter data:\n");
    scanf("%d",&x);
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    struct Node* temp=head;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
        i+=1;

    }
    newnode->next=temp->next;
    temp->next=newnode;


}

// printing a list
void print()
{
  struct Node* temp=head;
  printf("list is: \n");
  while(temp!=NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  printf("\n");

}


int main()
{
    head=NULL;
    int i , x ,n;
    printf("how many node : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data:\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
    insertatpos();
    print();


}