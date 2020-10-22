#include<bits/stdc++.h>
using namespace std;

// best case O(1) ,worst case O(n) 
int linear_search(int arr[],int n ,int x){

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i+1;
        }
    }
    return -1;

}

int main()
{
   cout<<"enter number of elements: ";
   int n;
   cin >> n;

   int a[n];
  cout<<"enter array elements: ";
   for(int i=0;i<n;i++)
   cin >> a[i];
   
   cout<<"enter element to be searched : ";
   int x;
   cin >> x;

   int res=linear_search(a,n,x);

   res!=-1?cout<<"element present at :"<<res:cout<<"not present ";



    return 0;
}