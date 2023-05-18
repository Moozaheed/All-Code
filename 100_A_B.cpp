#include <bits/stdc++.h>
using namespace std;
int  main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int cnt=0;

        for(int j=1;i<=n;j++)
        {
            if(n%j==0)
            {
                cnt++;
            }
        }
        if(cnt==2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
}