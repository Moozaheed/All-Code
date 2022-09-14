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
    ll sum=a+b;

    S aa=to_string(a);
    S bb=to_string(b);
    S ssum=to_string(sum);

    S aaa="";
    stringstream stream(aa);
    string intermediate;
    while(getline(stream, intermediate, '0'))
    {
        aaa+=intermediate;
    }
    stringstream geek(aaa);
    int intr;
    geek >> intr;

    S bbb="";
    stringstream stream1(bb);
    //string intermediate;
    while(getline(stream1, intermediate, '0'))
    {
         bbb+=intermediate;
    }
    stringstream geek2(bbb);
    int intr2;
    geek2 >> intr2;
    S sssum="";
    stringstream stream2(ssum);
    //string intermediate;
    while(getline(stream2, intermediate, '0'))
    {
         sssum+=intermediate;
    }
    stringstream geek3(sssum);
    int intr3;
    geek3 >> intr3;

    if(intr+intr2==intr3)cY;
    else cN;


   
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