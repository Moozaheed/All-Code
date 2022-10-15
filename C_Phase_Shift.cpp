//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
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

map<char,char>mp,mp1;
bool check(char ch1,char ch2)
{
    char ch;
    while(mp[ch1]!=ch)
    {
        ch1=mp[ch1];
        if(ch1==ch2)return false;
    }
    return true;
}

void Boom()
{
    //Let's Move

        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(mp[ch]!=0)
            {
                ans+=mp[ch];
            }
            else{
                int f=0;
                for(char ch1='a';ch1<='z';ch1++)
                {
                    if(ch!=ch1 && mp1[ch1]==0 && check(ch1,ch))
                    {
                        mp1[ch1]=ch;
                        mp[ch]=ch1;
                        ans+=ch1;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    for(char ch1='a'; ch1<='z'; ch1++)
                    {
                        if(mp1[ch1]==0)
                        {
                            mp[ch]=ch1;
                            ans+=ch1;
                            break;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;


        mp.clear();
        mp1.clear();


    

    




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
