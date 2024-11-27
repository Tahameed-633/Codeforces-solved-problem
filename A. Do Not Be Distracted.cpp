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
        int ans=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            char x=s[i];
            while(i<s.size() &&s[i]==x)
            {
                i++;
            }
            i--;
            if(mp[x]>1)
                ans=1;
        }
        if(ans==1)
        cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;


    }
}
