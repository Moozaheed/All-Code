#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		int mx=-1;
		for(int i=0;i<n-1;i++)
        {
            int p=arr[i+1]-arr[i];
            mx=max(p,mx);
        }
        cout<<mx<<endl;

	}
}

