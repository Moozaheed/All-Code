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
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 
void Boom()
{
    //Let's Move
   


 ll int n, m;
 cin>>n>>m;
       
        map<ll int, vector<ll int>>x, y;
        for(ll int i=0;i<n;i++)
        {
            for(ll int j=0;j<m;j++)
            {
                //cin>>v[i][j];
                // cout<<v[i][j]<<" ";
                ll int oo;
                cin>>oo;
                x[oo].pb(i+1), y[oo].pb(j+1);
            }
        }
        ll int ans = 0;
        ll int sum=0;
        for(auto pp:x){
            auto a=pp.fi;
            auto b=pp.se;
            ll int n = b.size();
            ll int suf = 0, pre = 0;
            sort(all(b));
            for(ll int i = 0;i<n;i++){
               // cout<<pre<<" "<<suf<<" ";
                //ans+=((b[i]*i) - pre);
                //ans+=(suf - (b[i]*i));
                pre+=b[i];
                suf+=b[n-1-i];
                ans+=abs(suf-pre);
               // cout<<ans<<endl;
                //cout<<pre<<" "<<suf<<endl;

                 //cout<<sum<<" "<<ans<<endl;
            }
            cout<<endl;
        }
        for(auto pp:y){
             auto a=pp.fi;
            auto b=pp.se;
            ll int n = b.size();
            ll int suf = 0, pre = 0;
            sort(all(b));
            for(ll int i = 0;i<n;i++){
               // ans+=((b[i]*i) - pre);
                //ans+=(suf - (b[i]*i));
                pre+=b[i];
                suf+=b[n-1-i];
                ans+=abs(suf-pre);
                // cout<<sum<<" "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 