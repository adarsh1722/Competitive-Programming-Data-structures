#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* top =0;

// push operation
void push(int x)
{
    struct Node* newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;

}

// pop operation
void pop()
{
    struct Node* temp;
    temp=top;
    if(top==0)
    {
        printf("no items\n");
        return;
    }
    printf("%d\n",top->data);
    top=top->next;
    free(temp);

}

// displaying stacks
void display()
{
    struct Node* temp;
    temp=top;
    if(top==0)
    {
        printf("empty");
        return;
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

}

// top most element
void peek()
{
  if(top==0)
  {
      printf("empty");
  }
  else
  {
      printf("%d\n",top->data);
  }


}

int main()
{
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();

}
