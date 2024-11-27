#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll n_f=(n+a-1)/a;
    ll m_f=(m+a-1)/a;
    ll total_flagstone=n_f*m_f;
    cout<<total_flagstone<<endl;
    return 0;
}
