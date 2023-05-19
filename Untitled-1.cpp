#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n,m;
        cin>>n>>m;
        if(n>m)swap(n,m);
        if(n<=0 || m<=0)
        {
            break;
        }
        int sum=0;
        for(int i=n;i<=m;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }

}