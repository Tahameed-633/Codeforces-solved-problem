#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x=(k*(k+1))/2;
    int cost=n*x;
    int borrow=max(0,cost-m);
    cout<<borrow;
}
