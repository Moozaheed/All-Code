
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp ' '
#define ll long long

int power(int x,int n)
{

    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=x;
    }
    return sum;
}

int main()
{
    ll n;
    cin>>n;
    cout<<power(2,n);
}
