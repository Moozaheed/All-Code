//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
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
#define mem(arr,val) memset(arr,val,sizeof(arr));
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

    
    int n; string s; 
    cin >> n >> s;
    
    if (count(all(s), '(') * 2 != n) 
    {
        cout << "-1\n";
        return;
    }

    vector<int> up, down;
    int cur = 0;
    for (int i = 0; i < n; ++i) 
    {
        if (s[i] == '(') 
        {
            if (cur >= 0) up.pb(i);
            else down.pb(i);
            cur++;
        } 
        else 
        {
            if (cur > 0) up.pb(i);
            else down.pb(i);
            cur--;
        }
    }

    // for(auto x:up)cerr<<x<<sp;
    // cerr<<dl;
    
    // for(auto x:down)cerr<<x<<sp;
    // cerr<<dl;


    if (up.empty() || down.empty()) 
    {
        cout << "1\n";
        for (int i = 0; i < n; ++i) cout << "1 ";
        cout << "\n";
        return;
    }

    vector<int> res(n, 1);
    for (auto i: down) res[i] = 2;

    cout << "2\n";
    for (int i = 0; i < n; ++i) cout << res[i] << ' ';
    cout << "\n";



}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
