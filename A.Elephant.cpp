#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int steps=n/5;
    if(n%5!=0)
    {
        steps++;
    }
    cout<<steps;

}
