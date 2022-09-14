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
#define N 10
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;

 ll I[N][N],T[N][N];
 
 
void mul(ll A[][N],ll B[][N],ll dim)
{
    ll res[dim+1][dim+1];
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(ll k=0;k<dim;k++)
            {
                ll x=(A[i][k]*B[k][j])%hp;
                res[i][j]=(res[i][j]+x)%hp;
            }
        }
    }
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)A[i][j]=res[i][j];
    }
}
void solve(ll a,ll b,ll n)
{
    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;
 
    T[0][0]=0;
    T[0][1]=T[1][0]=T[1][1]=1;
    n--;
    while(n)
    {
        if(n%2==1)
        {
            mul(I,T,2);
            n--;
        }
        else
        {
            mul(T,T,2);
            n/=2;
        }
    }
 
    ll ans=a*I[0][1]+b*I[1][1];
    cout<<ans%hp<<dl;
}
void Boom()
{
    //Let's Move
    
ll a,b,n;
cin>>a>>b>>n;

solve(a,b,n);



   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 