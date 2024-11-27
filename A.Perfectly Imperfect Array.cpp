#include<bits/stdc++.h>;
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
        int x;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            int a=sqrt(x);
            if(a*a!=x)
                ans=1;
            else
                ans=0;
        }
        if(ans==1)
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
