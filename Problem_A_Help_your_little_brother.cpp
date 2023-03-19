#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;       
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==3)
        {
            map<char,int>ok;
            ok[s[0]]++;
            ok[s[1]]++;
            ok[s[2]]++;

            int p=0;

            if(ok['o'])p++;
            if(ok['n'])p++;
            if(ok['e'])p++;

            if(p>=2)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else cout<<3<<endl;
    }
    

}
