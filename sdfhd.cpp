#include<bits/stdc++.h>
using namespace std;
bool isv(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')return true;
    return false;
}

int main()
{
    string str;
    cin>>str;
    bool ok=false;
    for(int i=0;i<str.size()-2;i++)
    {
        if(isv(str[i])&&isv(str[i+1])&&isv(str[i+2]))ok=true;
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

