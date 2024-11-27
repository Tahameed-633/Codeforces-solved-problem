#include<bits/stdc++.h>;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int maxx1=max(s1,s2);
        int minn1=min(s1,s2);
        int maxx2=max(s3,s4);
        int minn2=min(s3,s4);
        if(minn1>maxx2 || minn2>maxx1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
