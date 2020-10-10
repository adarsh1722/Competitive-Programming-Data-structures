#include<bits/stdc++.h>
using namespace std;

int q[50]={0};

int r=-1;
int f=-1;

// insert
void insert()
{
    int x;
    if(r==49)
    {
        cout<<"queu is full\n";
        return;
    }
    else 
    {
        if(f==-1)
        f=0;

        cout<<"enter element\n";
        cin >> x;
        r+=1;
        q[r]=x;

        
    }
    

}
// delete
void  Delete()
{
    if(f==-1 && r==-1)
    {
        cout<<"empty\n";
    }
    else if (f==r)
    {
        f=-1;r=-1;
        
    }
    else
    {
        f+=1;
    }
    

}
// display
void display()
{

  if(f==-1)
  {
      cout<<"empty\n";
      return;
  }
  else
  {
      cout<<"queue  is :\n";
      for(int i=f;i<=r;i++)
      std::cout << q[i] <<" ";

      cout << "\n";
  }
  
}

// main
int main()
{
    int choice;

    while(1)
    {
        cout <<"1. insert\n";
        cout<<"2.delete\n";
        cout<<"3.display\n";
        cout<<"4.exit\n";
        cout<<"enter your choice\n";
        cin >> choice;

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
            exit(1);
            default:
            cout <<"wrong choice\n";

        }


    }

   

    return 0;

}