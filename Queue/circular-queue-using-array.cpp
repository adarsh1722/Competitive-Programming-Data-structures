#include<bits/stdc++.h>
using namespace std;

#define n 5

int q[n];

int front=-1;
int rear=-1;


// printing element of a queue

void display()
{
    if(front==-1 && rear == -1)
    {
        cout << "queue is empty\n";

    }
    else
    {
        cout << "queue is =====> ";
        int i = front;
        while(i!=rear)
        {
            cout << q[i] << " ";
            i=(i+1)%n;
        }

        cout << q[rear] <<" ";

        cout << endl;
    }
    
}

// inserting in queue

void insert()
{
    cout << "enter data \n";
    int x;

    cin >>  x ;
    
    if(front == -1 && rear == -1)
    {
        front = 0 ;
        rear = 0;
        q[rear]=x;
    }
    else if ((rear+1)%n==front)
    {
        cout<<"queue is full\n";

        
    }
    else
    {
        rear=(rear+1)%n;
        q[rear]=x;

    }

    display();

}

// deleting a element

void Delete()
{
    if(front == -1 && rear == -1)
    {
        cout << "queue is emplty\n";
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;

    }
    else
    {
        front = (front+1)%n;
    }

    display();

    
    

}

// for top most element

void peek()
{
    cout << "peek element is ===> ";

    cout << q[front] <<"\n";

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
            Delete();
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

