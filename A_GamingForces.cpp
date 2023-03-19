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

    ll int a,b,c,d;
    cin>>a>>b>>c>>d;

    int alice_mood = 0;
	int bob_mood = 0;
	int jokes_told = 0;
	
	while (alice_mood >= 0 && bob_mood >= 0 && a+b+c+d!=0)
	{
		//type 1: both Alice and Bob like them;
		if (alice_mood >= 0 && bob_mood >= 0 && a)
		{
			alice_mood++;
			bob_mood++;
			jokes_told++;
            a--;
		}
		
		//type 2: Alice likes them, but Bob doesn't;
		if (alice_mood >= 0 && bob_mood >= 0 && b)
		{
			alice_mood++;
			bob_mood--;
			jokes_told++;
            b--;
		}
		
		//type 3: Bob likes them, but Alice doesn't;
		if (alice_mood >= 0 && bob_mood >= 0 && c)
		{
			alice_mood--;
			bob_mood++;
			jokes_told++;
            c--;
		}
		
		//type 4: neither Alice nor Bob likes them.
		if (alice_mood >= 0 && bob_mood >= 0 && d)
		{
			alice_mood--;
			bob_mood--;
			jokes_told++;
            d--;
		}
        cerr<<alice_mood<<sp<<bob_mood<<dl;
        cerr<<a<<sp<<b<<sp<<c<<sp<<d<<dl;

        cout<<jokes_told<<sp;
	}

    cout<<jokes_told<<endl;


    




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
