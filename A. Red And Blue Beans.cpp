#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
int main()
{
    ll t;
cin>>t;
while(t--)
{
    ll r,b,d;
    cin>>r>>b>>d;
    if(d==0)
    {
        if(r==b)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        continue;
    }
    else
    {
        int maxx=max(r,b);
        int minn=min(r,b);
        d++;
        ll x=minn*d;
        if(x>=maxx)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
}
