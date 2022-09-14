#include<bits/stdc++.h>
#define pb push_back
#define sp ' '
#define dl "\n"
#define ll long long int
using namespace std; 

 ll n,k;
 ll mx=0;
 struct pagol
 {
 	 ll a,b,c;
 };

vector<pagol>vec;


 bool f(ll x)

      ll ans=0;
    
     for(auto pp:vec)
     {
     	ll tmp=pp.a*pp.b+pp.c;
        ll a=(x/tmp)*pp.b;
        ll b=min((x%tmp)/pp.a,pp.b);
        ans+=(a+b);
     }

//cerr<<ans<<dl;

     return ans>=n;
 }

int main() 
{   
   

   cin>>n>>k;

   for(int i=0;i<k;i++)
   {
   	 ll a,b,c;
   	cin>>a>>b>>c;
   	vec.pb({a,b,c});
   }
//cerr<<vec.size()<<dl;
//for(auto pp:vec)cerr<<pp.a<<sp<<pp.b<<sp<<pp.c<<dl;

    ll l=0;
    ll r=1e10;

   
//cerr<<r<<dl;
//for(auto xx:aaa)cerr<<xx<<sp;

   while(r>l+1)
    {
       ll m=(l+r)/2;
        if(f(m))r=m;
        else l=m;
    }
   
   cout<<r<<dl;

   for(auto pp:vec)
   {
        ll tmp=pp.a*pp.b+pp.c;
        ll a=(r/tmp)*pp.b;
        ll b=min((r%tmp)/pp.a,pp.b);
        ll cur=min(a+b,n);
        cout<<cur<<sp;
        n-=cur;
   }
   



} 