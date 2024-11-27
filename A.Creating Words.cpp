#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        char temp1=s1[0];
        char temp2=s2[0];
        s1[0]=temp2;
        s2[0]=temp1;
        cout<<s1<<" "<<s2<<endl;

    }
}
