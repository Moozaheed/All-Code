

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t;
    cin.ignore();
    //cout<<t<<endl;
    int k=1;
    while(t--)
    {


	getline(cin,str);

	int v=0,c=0,w=0;

        stringstream stream(str);
		string intermediate;
		while(getline(stream, intermediate, ' '))
		{
			if(intermediate.size()>0)w++;
		}



	for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')continue;

        if(str[i]=='a' || str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')v++;

        else c++;
    }

    cout<<"Case "<<k<<" - Vowels : "<<v<<" Consonants : "<<c<<" Words : "<<w<<endl;
    k++;
    }

}

