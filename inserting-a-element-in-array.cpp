#include<bits/stdc++.h>
using namespace std;

 int main() {

     cout << "enter number of elements :\n";

     int n;
     cin >> n;

     cout<<"enter elements\n";

     int a[n+1];
     for(int i=0;i<n;i++)
     {
         cin >> a[i];
     }

     cout <<("enter at which position you want to insert:\n");
     int pos;
     cin >> pos;
    

     cout<<"enter element\n";
     int x;
     cin >> x;

     for(int i=n;i>=pos;i--)
     {
         a[i]=a[i-1];
     }

     a[pos-1]=x;


     cout <<"new array :\n";

     for(int i=0;i<=n;i++)
     {
         cout<<a[i]<<" ";

         
     }

     cout<<"\n";











    return 0;
}