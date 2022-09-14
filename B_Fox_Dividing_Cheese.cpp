//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 
void Boom()
{
    //Let's Move
ll int a,b;
cin>>a>>b;
int ac2 = 0, ac3 = 0, ac5 = 0;
int bc2 = 0, bc3 = 0, bc5 = 0;
 while(0 == a%2) ac2++, a /= 2; 
 while(0 == a%3) ac3++, a /= 3; 
 while(0 == a%5) ac5++, a /= 5; 
 
 while(0 == b%2) bc2++, b /= 2; 
 while(0 == b%3) bc3++, b /= 3; 
 while(0 == b%5) bc5++, b /= 5; 
 

if(a!=b)cout<<-1<<dl;
else
cout<<abs(ac2-bc2)+abs(ac3-bc3)+abs(ac5-bc5)<<dl;



   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 