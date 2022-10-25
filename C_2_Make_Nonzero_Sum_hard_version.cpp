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
 
    int arr[n];
 
    int cnt1=0,cnt_1=0,tot=0;
 
    vector<int>v;
 
    for(int i=0;i<n;i++)
    {
 
        cin>>arr[i];
        
        if(arr[i]==0)tot++;
 
        if(i==0 && arr[i]==0)continue;
 
        if(arr[i]==-1)cnt_1++;
        if(arr[i]==1)
        {
            if( i && arr[i-1]==0)v.push_back(i-1);
            else cnt1++;
        }
 
    }

    if(tot==n)
    {
        cout<<n<<dl;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<sp<<i<<dl;
        }
        return;
    }


    cerr<<cnt1<<sp<<cnt_1<<sp<<v.size()<<dl;

    // for(auto x:arr)cerr<<x<<sp;
    // cerr<<dl;
 
    if(cnt1>cnt_1)
    {
        cnt1-=cnt_1;
        cnt_1=0;
    }
    else{
        cnt_1-=cnt1;
        cnt1=0;
    }

 cerr<<cnt1<<sp<<cnt_1<<sp<<v.size()<<dl;

    if(cnt1+cnt_1>v.size())
    {
        cout<<-1<<endl;
        return;
    }
 
 
    int baki=v.size()-(cnt1+cnt_1);
    cerr<<baki<<dl;
 
    if(baki%2==1)
    {
        cout<<-1<<endl;
        return;
    }
 

//  for(auto x:v)cerr<<x<<sp;
 
 cout<<n-(baki/2)-cnt_1-cnt1<<dl;
    int j=0;
    bool ok=true;
    for(int i=0;i<n;i++)
    {
 
        if(j>=v.size() ||i!=v[j])
        {
            cout<<i+1<<" "<<i+1<<endl;
            continue;
        }
        if(cnt_1)
        {
            if(v[j]==i)
            {
                cout<<i+1<<" "<<i+1<<endl;
                cout<<i+2<<" "<<i+2<<endl;
                j++;
                cnt_1--;
                i++;
                continue;
            }
        }
        if(cnt1)
        {
            if(v[j]==i)
            {
                cout<<i+1<<" "<<i+2<<endl;
                i++;
                cnt1--;
                j++;
            }
        }
 
        if(baki)
        {
            if(v[j]==i)
            {
                if(ok)
                {
 
                    cout<<i+1<<" "<<i+1<<endl;
                    cout<<i+2<<" "<<i+2<<endl;
                    ok=false;
                }
                else
                {
 
                    cout<<i+1<<" "<<i+2<<endl;
                    ok=true;
                }
                baki--;
                j++;
                i++;
 
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
