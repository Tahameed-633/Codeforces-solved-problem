#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll avg=0;
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int cnt=1;
        avg=ar[0];
        for(int i=1;i<n;i++)
        {
            if(avg==ar[i])
                cnt++;
            else
                break;
        }
        cout<<n-cnt<<endl;
    }
}
