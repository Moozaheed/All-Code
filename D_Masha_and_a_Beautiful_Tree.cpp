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


int ans=0;
vector<int> a;
 
void Call(int l1,int r1,int l2,int r2){
    
    int mxL=0;
    for(int i=l1;i<=r1;i++)
    {
        mxL=max(mxL,a[i]);
    }
    
    int mnR=INT_MAX;
    for(int i=l2;i<=r2;i++)
    {
        mnR=min(mnR,a[i]);
    }
    if(mxL>mnR)
    {
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(a[i],a[R]);
            R++;
        }
        ans++;
    }

    if(l1==r1)return;
    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;
 
    Call(l1,mid1,mid1+1,r1);
    Call(l2,mid2,mid2+1,r2);
}
 

void Boom()
{
    //Let's Move

    int n;
	cin>>n;
	a.resize(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];

	ans=0;
    if(is_sorted(a.begin()+1,a.begin()+n+1))
    {
        cout<<0<<endl;
        return;
    }

    int mid=(n+1)/2;
    Call(1,mid,mid+1,n);

    if(is_sorted(a.begin()+1,a.begin()+n+1))
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
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
