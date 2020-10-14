#include<stdio.h>

int A[101]={0};
int top=-1;
// push operation
void push(int x)
{
    if(top==101-1)
    {
        printf("error :\n");
        return;
    }
    A[++top]=x;
}
// pop opeartion
void pop()
{
    if(top==-1)
    {
        printf("error :\n");
        return;
    }
    top--;
}

// print stack
void print()
{
    int i;
    printf("stack is : \n");
    for(int i=0;i<=top;i++)
    printf(" %d ",A[i]);
    printf("\n");
}
// print top
int Top()
{
    return A[top];
}

int main()
{
    // operations
    push(2);print();
    push(4);print();
    push(3);print();
    pop();print();
    push(12);print();

}
