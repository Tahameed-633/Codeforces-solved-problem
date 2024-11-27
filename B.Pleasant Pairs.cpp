#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            int z=i+i-1;
            if(ar[i]>z)
                continue;
            int x=(z%ar[i]+1);
            int y=i-x;
            while(y>=1)
            {
                if(y+i==ar[i]*ar[y])
                    ans++;
                y-=ar[i];
            }
        }
        cout<<ans<<endl;
    }
}
