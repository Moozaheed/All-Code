#include <bits/stdc++.h>
using namespace std;
int  main()
{
   int arr[10005];

   for(int i=0;i<10005;i++)
   {
    arr[i]=0;
   }

   int n,m;
   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    arr[x]++;
   }

   for(int i=1;i<=m;i++)
   {
    cout<<arr[i]<<endl;
   }


}