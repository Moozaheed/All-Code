#include<bits/stdc++.h>
#define pb push_back
#define sp ' '
#define dl "\n"
using namespace std; 

int koli;
 int n,k;
 int mx=0;
 struct stt
 {
 	 int a,b,c;
 };

vector<stt>data;
vector<int> aas;

 bool f(int x)
 {
     int ans=0;
     aas.clear();
     for(auto pp:data)
     {
     	int kk=pp.a+pp.c;
     	ans+=x/kk;
     	if(x%kk)
     	{
     		ans+=((x%kk)/pp.a);
     	}
     	if(aas.size()==0)aas.pb(ans);
     	else aas.pb(ans-aas.back());
     }

//cerr<<ans<<dl;
     koli=ans;
     return ans>=n;
 }

int main() 
{   
   
     //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

   cin>>n>>k;
   int papri;
   for(int i=0;i<k;i++)
   {
   	 int a,b,c;
   	cin>>a>>b>>c;
   	data.pb({a,b,c});

   }
//cerr<<data.size()<<dl;
//for(auto pp:data)cerr<<pp.a<<sp<<pp.b<<sp<<pp.c<<dl;

    int l=0;
    int r=2;

    vector<int> afs;

	while(!f(r))
	{
		r*=2;
		afs=aas;
		papri=koli;
	}

//cerr<<r<<dl;
//for(auto xx:aas)cerr<<xx<<sp;

   while(r>l+1)
    {
        int  m=(l+r)/2;
        if(f(m))r=m,afs=aas,papri=koli;
        else l=m,afs=aas,papri=koli;
    }
   
   cout<<r<<dl;

   int besi=papri-n;
   for(int i=0;i<k;i++)
   {
   	if(besi>0)
   	{
   		if(besi>afs[i])afs[i]=0,besi-=afs[i];
   		else afs[i]-=besi,besi=0;
   	}
   	cout<<afs[i]<<sp;
   }



} 