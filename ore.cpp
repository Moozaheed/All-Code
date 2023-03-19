#include<bits/stdc++.h>
using namespace std;
vector<string> removeComments(vector<string> source) 
{
    vector<string> res;
    bool left = false;
    string leftString = "";
    for(int i = 0 ; i < source.size() ; )
    {
        string code = source[i];

        if(left)
        {
            size_t pos = code.find("*/");
            if(pos != string::npos)
            {
                code = leftString + code.substr(pos+2);
                left = false;
            }
            else
            {
                i++;
                continue;
            }
        }

        size_t pos1 = code.find("//");
        size_t pos2 = code.find("/*");
        if(pos1 == string::npos && pos2 == string::npos)
        {
            if(code != "")
                res.push_back(code);
            i++;
        }
        else if(pos1 != string::npos && (pos2 == string::npos || pos1 < pos2))
        {
            if(pos1 != 0)
                res.push_back(code.substr(0, pos1));
            i++;
        }
        else if(pos2 != string::npos && (pos1 == string::npos || pos2 < pos1))
        {
            size_t pos_right = code.find("*/", pos2+2);

            if(pos_right != string::npos)
                source[i] = code.substr(0, pos2) + code.substr(pos_right+2);
            else
            {
                left = true;
                leftString = code.substr(0, pos2);
                i ++;
            }
        }
    }
    return res;
}

int main()
{
	freopen("input.txt", "r", stdin);
	string str;
	vector<string>input;

	while(getline(cin,str))
    {
        input.push_back(str);
    }

    vector<string>ans=removeComments(input);

    for(auto x:ans)
    {
        cout<<x<<endl;
    }


}
