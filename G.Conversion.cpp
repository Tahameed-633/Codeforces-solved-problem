#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==',')
            s[i]=' ';
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    }
    cout<<s<<endl;

}
