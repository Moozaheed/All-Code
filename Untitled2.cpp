#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {

        int k;
        cin>>k;
        ans=max(ans,k);
    }
    cout<<ans;

}
