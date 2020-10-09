#include<stdio.h>

int A[101]={0};
int top=-1;

void push(int x)
{
    if(top==101-1)
    {
        printf("error :\n");
        return;
    }
    A[++top]=x;
}

void pop()
{
    if(top==-1)
    {
        printf("error :\n");
        return;
    }
    top--;
}


void print()
{
    int i;
    printf("stack is : \n");
    for(int i=0;i<=top;i++)
    printf(" %d ",A[i]);
    printf("\n");
}

int Top()
{
    return A[top];
}

int main()
{
    push(2);print();
    push(4);print();
    push(3);print();
    pop();print();
    push(12);print();

}
