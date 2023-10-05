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
#define ddl(x) cerr<<x<<dl;
#define dsp(x) cerr<<x<<sp;
#define cdl(x) cout<<x<<dl;
#define csp(x) cout<<x<<sp;
#define autox(data) for(auto x:data)
#define coutall(data) for(auto x:data)cout<<x<<sp;cout<<dl;
#define cerrall(data) for(auto x:data)cerr<<x<<sp;cerr<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


void printt(priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> pq)
{
    while (!pq.empty()) 
    {
        auto temp=pq.top();
        pq.pop();
        cerr<<temp.first<<sp<<temp.second<<dl;
    }
    cerr<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s,ans;
        cin >> s;

         priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> pq,nx;
         for(int i=0;i<n;i++)
         {
            pq.push({s[i],i+1});
         }


       printt(pq);



        int pos=1;
        while(!pq.empty())
        {
            while (!pq.empty() ) 
            {
                auto temp=pq.top();
                pq.pop();

                int p=abs(pos-temp.second);
                cerr<<p<<sp;

                if(p==0 || p%k==0 || p%2==0)
                {
                    ans+=temp.first;
                    pos++;

                    while(!nx.empty())
                    {
                        pq.push(nx.top());
                        nx.pop();
                    }
                }
                else
                {
                    nx.push(temp);
                }
            }
           // pq=nx;
        }

        cout<<ans<<endl;
         

    }

    return 0;
}
