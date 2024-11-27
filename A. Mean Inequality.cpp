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
        n*=2;
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j)
        {
            if(cnt%2==0)
            {
                cout<<ar[j]<<" ";
                j--;
            }
            else
                {
                    cout<<ar[i]<<" ";
                    i++;
                }
                cnt++;

        }
        cout<<endl;
    }
}
