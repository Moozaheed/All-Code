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
 

 //From Tutorial
void Boom()
{
    //Let's Move
    ll int n;
    S s;
   cin >> n >> s;
   ll int ans = hp;
		for(ll int i = 0; i < n; i++)
		{
			vector<ll int> f(3, 0);
			f[s[i] - 'a']++;
			for(ll int j = i + 1; j < min(n, i + 7); j++)
			{
				f[s[j] - 'a']++;
				if(f[0] > f[1] && f[0] > f[2])
					ans = min(ans, j - i + 1);
			}
		}
		if(ans == hp)
			ans = -1;
		cout << ans << endl;
   



   
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