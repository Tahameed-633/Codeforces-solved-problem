#include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=10)
        {
            if(n<=6)cout<<15<<endl;
            else if(n<=8)cout<<20<<endl;
            else cout<<25<<endl;
        }

        else
        {
            ll ans=(n/10) * 25;
            ll x=n%10;

            if(x)
            {
                if(x==1 || x==2)ans+=5;
                else if(x<5)ans+=10;
                else if(x<=6)ans+=15;
                else if(x<=8)ans+=20;
                else ans+=25;
            }
            cout<<ans<<endl;
        }
    }
}
