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
        string s;
        cin>>s;
        string sr=s;
        sort(sr.begin(),sr.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(sr[i]!=s[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
