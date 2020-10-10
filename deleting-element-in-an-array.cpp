#include<bits/stdc++.h>
using namespace std;

int main()
{
     cout << "enter number of elements :\n";

     int n;
     cin >> n;

     cout<<"enter elements\n";

     int a[n]={0};
     for(int i=0;i<n;i++)
     {
         cin >> a[i];
     }

     cout <<("enter at which position you want to delete:\n");
     int pos;
     cin >> pos;

     pos-=1;

     for(int i=pos;i<n-1;i++)
     {
         a[i]=a[i+1];
     }
     cout <<"new array :\n";
     
     n-=1;

     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";

         
     }


    



}