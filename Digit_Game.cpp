
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void Boom()
{
    //Let's Move

    ll int n,m;
    while(cin>>n>>m)
    {
        ll int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }

    if(sum==m)cout<<"Karim"<<endl;
    else cout<<"Rahim"<<endl;
    }



}

int main()
{

    int t=1;       
    cin>>t;
    for(int i=1;i<=1;i++)
    {
        Boom();
    }

    return 0;

}
