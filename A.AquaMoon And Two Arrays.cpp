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
        for(int i=1;i<=n;i++)cin>>ar[i];

        int br[n];
        for(int i=1;i<=n;i++)cin>>br[i];

        vector<int>increase,decrease;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            if(br[i]>ar[i])
            {
                int x=br[i]-ar[i];
                for(int j=1;j<=x;j++)increase.push_back(i);
                sum1+=x;
            }
            else if(br[i]<ar[i])
            {
                int x=ar[i]-br[i];
                 for(int j=1;j<=x;j++)decrease.push_back(i);
                sum2+=x;
            }
        }
        if(sum1!=sum2)cout<<-1<<endl;
        else if(sum1==0)cout<<0<<endl;
        else{
            cout<<sum1<<endl;;
            for(int i=0;i<increase.size();i++)
            {
                cout<<decrease[i]<<" "<<increase[i]<<endl;
            }
        }

    }
}







