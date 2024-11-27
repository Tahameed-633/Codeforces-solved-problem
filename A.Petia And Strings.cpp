#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string digit;
    for(char ch:str)
    {
        if( ch>='1'&& ch<='3')
        {
            digit+=ch;
        }
    }
    sort(digit.begin(),digit.end());
    string result;
    for(int i=0;i<digit.size();i++)
    {
        result+=digit[i];
        if(i<digit.size()-1)
        {
            result+='+';
        }
    }
    cout<<result<<endl;
}
