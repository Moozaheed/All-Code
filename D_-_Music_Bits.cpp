//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define dl "\n"
using namespace std;
ll int M = 1e9+7;


ll int powmod(ll int x,ll int n)
{
                                    //This pro is (x^n)%m
    if(n==0)
        return 1;
    else if(n%2 == 0)   
        return powmod((x*x)%M,n/2);
    else                        
        return (x*powmod((x*x)%M,(n-1)/2))%M;

}



int main()
{
    ll int n;
    cin>>n;
    cout<<powmod(2,n)<<dl;

}
