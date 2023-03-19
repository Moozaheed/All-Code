#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool prime(int n)
{
    
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)cnt++;
    }
  
    if(cnt==2)return true;
    else return false;
}

int main()
{

    int n;
    cin>>n;
    int ans=0;

    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                if(prime(j))cnt++;
            }
        }
        if(cnt==2)ans++;
    }

    cout<<ans<<endl;
    

}


