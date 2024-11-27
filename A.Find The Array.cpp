#include<bits/stdc++.h>;
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int sum=0;
        int i=1;
        int s;
        cin>>s;
        int cnt=0;
        while(sum<s)
        {
            cnt++;
            sum+=i;
            i+=2;
        }
        cout<<cnt<<endl;
    }
}

