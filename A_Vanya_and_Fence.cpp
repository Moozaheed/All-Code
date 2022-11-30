#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,h,k=0,i;
cin>>n>>h;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]>h)
{
k++;
}
}
cout<<(k*2)+(n-k);

}
 