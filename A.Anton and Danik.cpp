#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            ans=0;
            cnt1++;
        }
        else if(s[i]=='D')
        {
            ans=1;
            cnt2++;
        }
    }
    if(cnt1>cnt2)

    {
        cout<<"Anton";
    }
    else if(cnt2>cnt1)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}
