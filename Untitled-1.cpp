#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
for(int k=0;k<q;k++)
{
    int p;
    cin>>p;
    int l=0,r=n-1,ans=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(arr[mid]==p)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<p)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(ans==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }


}

}
