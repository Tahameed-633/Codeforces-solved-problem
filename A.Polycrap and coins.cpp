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
        int ans1=n/3;
        int ans2=n/3;

        if(n%3==1)
            ans1++;
        if(n%3==2)
            ans2++;
        cout<<ans1<<" "<<ans2<<endl;
    }
}
