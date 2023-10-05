#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N=2*1e6+10;
struct node{
	int a,b,i;
	int c=0;
};
node a[N];
bool cmp(node a,node b){
	return a.c>b.c;
}
void solve(){
	int n;
	cin>>n;
	int maxn=-1000000000;
	for(int i=1;i<=n;i++){
		cin>>a[i].a;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].b;
		a[i].c=a[i].a-a[i].b;
		maxn=max(maxn,a[i].c);
		a[i].i=i;
	}
	set<int>s;
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		if(a[i].c==maxn){
			s.insert(a[i].i);
		}
	}
	cout<<s.size()<<endl;
	for(auto it:s){
		cout<<it<<" ";
	}
	cout<<endl;
	return;
}
signed main()
{
	int t;
	t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}