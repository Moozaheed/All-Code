#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    map<string,int>mp;
    while(t--)
    {
        string s;
        int a;
        cin>>t>>s;
        if(a==1)
        {
            int k;
            cin>>k;
            mp[s]+=k;
        }
        else if(a==2)
        {
            mp[s]=0;
        }
        else
        {
            cout<<mp[s];
        }
    }
}
