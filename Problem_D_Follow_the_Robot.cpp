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
        map<int,string>maa;
        int pos=0;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;

            if(s=="LEFT")
            {
                maa[i]=s;
            }
            else if(s=="RIGHT")
            {
                maa[i]=s;
            }
            else
            {
                string so;
                cin>>so;
                int k;
                cin>>k;
                s=maa[k];
                if(s=="LEFT")
                {
                    maa[i]=s;
                }
                else
                {
                    maa[i]=s;
                }
            

            }

            v.push_back(maa[i]);

        }

        for(auto x:v)
        {
            if(x=="LEFT")
            {
                pos--;
            }
            else
            {
                pos++;
            }
        }

        cout<<pos<<endl;
    }

    

}
