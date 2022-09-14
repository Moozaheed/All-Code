// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(), data.end()
#define b() begin()
#define e() end()
#define cY cout << "YES\n"
#define cN cout << "NO\n"
#define cy cout << "Yes\n"
#define cn cout << "No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr << x << dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9 + 7;

void Boom()
{
    // Let's Move
    int n;
    n = 10;
    bool ok=true;
    // map<int,int>data;
    int arr[10];
    S str;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        //   data[i]=k;
        arr[i] = k;
        for (int j = 0; j < k; j++)
            str += (i + '0');
    }
    // cerr<<str<<dl;
    if (arr[0])
    {
        swap(str[0], str[arr[0]]);
    }
    // cout<<str<<dl;
    //cerr<<str<<dl;
    for (int i = 1; i < str.size()-2; i++)
    {
        if (str[i] == str[i + 1])
        {
            int k=i+arr[str[i]-'0'];
            if(k>=str.size())
            {
                ok=false;
                break;
            }
            arr[str[i]-'0']--;
            swap(str[i + 1], str[k]);
        }
    }

    if(str[str.size()-1]==str[str.size()-2])
    {
        swap(str[str.size()-2],str[str.size()-3]);
    }
    
   
    if(!ok)cout<<-1<<dl;
    else cout<<str<<dl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;
}