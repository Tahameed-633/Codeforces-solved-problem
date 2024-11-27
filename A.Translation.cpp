#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[s.size()-1-i])
        {
            ans=1;
            break;
        }

    }
         if(ans==1)
            cout<<"NO";
        else
            cout<<"YES";
}
