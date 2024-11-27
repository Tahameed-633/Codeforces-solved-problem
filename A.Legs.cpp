#include<bits/stdc++.h>
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
        if(n==2)
        {
            cout<<1<<endl;
        }
        else if(n>2&&n%2==0)
        {
            ll num_cow=n/4;
            ll rem=n%4;
            ll num_hen=rem/2;
            ll num_animal=num_cow+num_hen;
            cout<<num_animal<<endl;
        }
    }
}
