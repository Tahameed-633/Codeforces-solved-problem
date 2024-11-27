#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,t;
        cin>>n>>x>>t;
        ll a=t/x;
        ll ans=0;
        if(x>t)
        {
            cout<<0<<endl;
        }
        else if(x==t)
        {
            cout<<n-1<<endl;
        }
        else if(a>=n)
        {
            ans=(n*(n-1))/2;
            cout<<ans<<endl;
        }
        else
        {
            ll z=n-a;
            ans=z*a;
            ans+=(a*(a-1))/2;
            cout<<ans<<endl;
        }
    }
}
