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
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll ans=0;
        for(int i=0;i<n-1;i++)
            {
                 ans=max(ans,ar[i]*ar[i+1]);
            }
            cout<<ans<<endl;
    }
}
