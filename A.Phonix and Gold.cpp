#include<bits/stdc++.h>;
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n>>x;
        int sum=0;
        int w;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
            sum=sum+w;
        }
        if(sum==x)
            cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            int cnt=0;
            int sum=0;
            while(cnt!=n)
            {
                int ans=v[0];
                v.erase(v.begin());
                if(sum+ans==x)
                {
                    v.push_back(ans);
                }
                else
                {
                    cout<<ans<<" ";
                    sum=sum+ans;
                    cnt++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
