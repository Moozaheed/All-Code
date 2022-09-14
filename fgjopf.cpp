#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{

		long long int n;
		cin>>n;

		long long int l=1,r=(long long int)1e10;
	while(l+1<r)
	{
		long long int mid=(l+r)/2;
		long long int arr=(mid*(mid+1))/2;
		if(arr<=n)l=mid;
		else r=mid;
	}
	cout<<l<<endl;

	}
}

