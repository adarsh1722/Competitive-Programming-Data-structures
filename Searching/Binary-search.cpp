#include<bits/stdc++.h>
using namespace std;
#define For(x) for(int i=0;i<x;i++)

// worst case: O(log2n) best case :O(1) 
int binary_search(int a[],int n, int x)
{
  int low=0,high=n-1,mid=0;

   while(low<=high)
   {
      mid=(low+high)/2;

      if(a[mid]==x) return mid+1;
      else if(a[mid]<x)  low+=1;
      else high-=1;
   }

   return -1;
    
}

int main()
{
  
   cout<<"enter number of elements: ";
   int n;
   cin >> n;

   int a[n];
   cout<<"enter array elements in sorted order: ";
   for(int i=0;i<n;i++)
   cin >> a[i];
   
   cout<<"enter element to be searched : ";
   int x;
   cin >> x;

  int res=binary_search(a,n,x);

   res!=-1?cout<<"element present at :"<<res:cout<<"not present ";
    return 0;

}
