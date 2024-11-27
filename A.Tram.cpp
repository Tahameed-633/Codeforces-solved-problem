#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int capacity=0,current_passenger=0;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        current_passenger-=a;
        current_passenger+=b;
        if(current_passenger>capacity)
        {
            capacity=current_passenger;
        }

    }
    cout<<capacity<<endl;
}
