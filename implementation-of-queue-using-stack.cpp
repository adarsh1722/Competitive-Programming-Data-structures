#include<bits/stdc++.h>
using namespace std;
#define n 5
int s1[n] , s2[n];

int top1=-1,top2=-1;

int c = 0;
// push for stack 1
void push1(int x)
{
    if(top1==n-1)
    {
        cout << "overflow\n";
    }
    else
    {
        s1[++top1]=x;
    }

}

// push for stack 2
void push2(int x)
{
    if(top2==n-1)
    {
        cout << "overflow\n";
    }
    else
    {
        s2[++top2]=x;
    }

}

// pop for stack1
int pop1()
{
    return s1[top1--];

}

// pop for stack 2
int  pop2()
{
    return s2[top2--];

}


// printing queue
void display()
{
 for(int i = 0 ;i<=top1;i++)
 cout << s1[i]<<" ";
 cout << "\n";
}

// inserting element
void insert()
{
   cout << "enter data \n";
   int x;
   cin >> x;

   push1(x);
   c++ ;
}

// deleting element
void Delete()
{
   if(top1== -1 && top2== -1)
  {
       cout << "empty\n";
  }
  else
  {
      for(int i=0;i<c;i++)
      {
          int a=pop1();
          push2(a);
      }
      int b=pop2();
      cout << "popped is "<<b <<"\n";
      c--;

      for(int i=0;i<c;i++)
      {
             int a=pop2();
             push1(a);
      }


  }
  
}

// topmost element
void peek()
{

   if(top1==-1)
   {
       cout<<"empty\n";
   }
   else
   {
       cout << s1[0]<<"\n";
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

    return 0;
}