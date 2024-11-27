#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    s3=s1+s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s3<<endl;
    char temp1=s1[0];
    char temp2=s2[0];
    s1[0]=temp2;
    s2[0]=temp1;
    cout<<s1<<" "<<s2<<endl;
}
