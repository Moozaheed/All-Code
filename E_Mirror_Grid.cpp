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

    int n;
    cin>>n;
    vs s;

    for(int i=0;i<n;i++)
    {
        S str;
        cin>>str;
        s.pb(str);
    }
    int cost=0;

    for (int i = 0, k = n - 1; i < n; i++, k--)
	{
		for (int j = 0, l = n - 1; j < n; j++, l--) 
        {
			int cnt = 0;
			if (s[i][j] == '1') cnt++;
			if (s[j][k] == '1') cnt++;
			if (s[k][l] == '1') cnt++;
			if (s[l][i] == '1') cnt++;
			if (cnt > (4 - cnt)) 
            {
				s[i][j] = '1';
				s[j][k] = '1';
				s[k][l] = '1';
				s[l][i] = '1';
				cost += ((4 - cnt));
			}
			else 
            {
				s[i][j] = '0';
				s[j][k] = '0';
				s[k][l] = '0';
				s[l][i] = '0';
				cost += cnt;
			}
		}
	}
	cout << cost << endl;




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
