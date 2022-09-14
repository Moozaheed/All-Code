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
 S t,p;
 vector<int>arr;

bool ok(int n)
{

   S tt=t;
    for(int i=0;i<n;i++)
    {
        tt[arr[i]]='0';
    }
    int i=0,j=0;
    while(i<tt.size() && j<p.size())
    {
        if(tt[i]==p[j])
        {
            i++;
            j++;
        }
        else i++;
    }

    if(j==p.size())return true;
    return false;

}

void Boom()
{
    //Let's Move
    cin>>t>>p;
    arr.resize(t.size());

    for(int i=0;i<t.size();i++)cin>>arr[i],arr[i]--;


    int l=0,r=t.size();


    while(r>l+1)
    {
        int m=(l+r)/2;
       // cerr<<m<<sp<<sp<<sp;
        if(ok(m))l=m;
        else r=m;
    }

    cout<<l<<dl;

   



   
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