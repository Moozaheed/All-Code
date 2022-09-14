

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {

	string str;  
	getline(cin, str);
	int v=0,c=0,w=0;
	for(int i=0;i<str.size();i++)
    {

        if(str[i]=='a' || str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')v++;
        else if(str[i]==' ')w++;
        else c++;
    }
    cout<<"Case "<<k<<" - Vowels : "<<v<<" Conosonants : "<<c<<" Words : "<<w<<endl;
    k++;
    }

}



	

		
	
		
	

