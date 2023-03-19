//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        ll int n;
        cin>>n;
        ll int arr[n];
        priority_queue<ll int> pq;
        ll int ans=0;
        for(ll int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0 && !pq.empty())ans+=pq.top(),pq.pop();    
            else {if(arr[i])pq.push(arr[i]);}           
        }
        cout<<ans<<endl;
    }
}
