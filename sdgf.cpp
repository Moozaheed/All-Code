#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    int a=0;

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }

    if(a==0)cout<<"Prime";
    else cout<<"Not Prime";



}

