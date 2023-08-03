#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

const int N = 2e5 + 5;
bool prime(ll n){
	if(n <= 1) return false;
	for(ll i = 2; i*i <= n; i++)
		if(n % i == 0) 
			return false;
}

void solve()
{
	ll n;
	cin >> n;
	if(prime(n) || n == 1) cout << "1" << "\n";
	else{
		ll ans = 0;
		int i = 2;
		while (n % i == 0) i++;
		ans = i;
		cout << --ans << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}