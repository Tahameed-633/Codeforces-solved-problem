#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        map<int,int>mp;
        int a,b,c;
        cin>>a>>b>>c;
        mp[1]=a;
        mp[2]=b;
        mp[3]=c;
        int ans=0;
        for(int i=1; i<3; i++)
        {
            if(mp[x]==0)
            {
                ans=1;
                break;

            }
            x=mp[x];
        }
        if(ans==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
