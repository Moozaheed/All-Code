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



ll int fun(ll int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}


void Boom()
{
    //Let's Move

    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);

    set<ll> st;
    int j = 0;
    for (auto &i : v)
    {
        cin >> i;
        if(i>9)
        st.insert(j);
        j++;
    }

    while (q--)
    {
        int ty, l, r;
        cin >> ty;
        if (ty == 2)
        {
            cin >> l;
            cout << v[l - 1] << dl;
        }
        else
        {
            cin >> l >> r;
            l--, r--;

            auto it = st.lower_bound(l);

            vector<ll> tmp;
            while (it != st.end())
            {
                int idx = *it;
                if (idx > r)
                    break;

                ll val = v[idx], sum = 0;

                while (val)
                {
                    sum += (val % 10);
                    val /= 10;
                }
                v[idx] = sum;
                if (sum <= 9)
                {
                    tmp.pb(idx);
                }
                it++;
            }

            for (auto i : tmp)
            {
                st.erase(i);
            }
        }
    }




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
