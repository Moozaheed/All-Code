#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c,d;
cin>>a>>b>>c>>d;

a=a%100;
b=b%100;
c=c%100;
d=d%100;

long long int mul=a*b*c*d;
long long int ans=mul%100;

if(ans>=0 && ans<=9)cout<<0<<ans;
else cout<<ans;


}
