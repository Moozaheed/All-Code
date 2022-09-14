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
    
    int n,k;
    cin>>n>>k;

    ll m=n*k;
    ll ev=m/2,od=(m+1)/2;
    if(ev%k||od%k)
    {
        cN;
    }
    else {
        int p=1;
        int q=2;
        
            cY;
            for(int i=1;i<=n;i++)
            {
               
                if(i%2==1)
                {
                    int s=k;
                    while(s--)
                    {
                        cout<<p<<sp;
                        p+=2;
                    }
                    cout<<dl;
                }
                else{
                    int ss=k;
                    while(ss--)
                    {
                        cout<<q<<sp;
                        q+=2;
                    }
                    cout<<dl;
                }
            }
    }
   



   
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