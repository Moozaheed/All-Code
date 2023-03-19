
#include<bits/stdc++.h>
using namespace std;


void Boom()
{
    //Let's Move

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        if(i==0 || i==m-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<'*';
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 || j==n-1)cout<<'*';
                else cout<<" ";
            }
        }

        cout<<endl;
    }




}

int main()
{

    int t=1;       
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        Boom();
    }

    return 0;

}
