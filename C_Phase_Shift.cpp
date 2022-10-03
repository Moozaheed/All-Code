/// :3
#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;

#include "bits/stdc++.h"

#define pb push_back
#define F first
#define S second
#define f(i, a, b)  for(int i = a; i < b; i++)
#define all(a)  a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) (int)(x).size()
#define mp(x,y) make_pair(x,y)
#define popCnt(x) (__builtin_popcountll(x))
#define int ll

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

const int N = 2e6+5, LG = 18, MOD = (119 << 23) + 1;
const long double PI = acos(-1);
const long double EPS = 1e-7;
const int dx[] = {1,1,0,-1,-1,-1,0,1};
const int dy[] = {0,1,1,1,0,-1,-1,-1};

int nxt[26];
int prv[26];
void doWork() {

    memset(nxt,-1, sizeof nxt);
    memset(prv,-1, sizeof prv);
    string ans = "";
    int n;  cin >> n;
    string s;   cin >> s;
    f(i,0,n) {
        if(nxt[s[i]-'a'] == -1) {
            bool ok = false;
            bitset<26> sameChain;
            int cur = s[i]-'a';
            sameChain[cur]=1;
            while(prv[cur] != -1) {
                cur = prv[cur];
                sameChain[cur]=1;
            }
            for(int j = 0; j < 26; j++)if(!sameChain[j]){
                if(prv[j] == -1) {
                    prv[j] = s[i] - 'a';
                    nxt[s[i]-'a'] = j;
                    ok=true;
                    break;
                }
            }
            if(!ok)nxt[s[i]-'a']=cur;
        }
        ans.push_back(nxt[s[i]-'a']+'a');
    }

    cout << ans << '\n';


}

int32_t main() {
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif // ONLINE_JUDGE
    int t = 1;
    cin >> t;
    while (t--) {
        doWork();
    }
    return 0;
}
