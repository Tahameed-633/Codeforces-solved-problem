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
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')||(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'))
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }
}
