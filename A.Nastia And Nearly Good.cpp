#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x,y,z;
        if(b==1)
        {
            cout<<"No"<<endl;
            //continue;
        }
        else if(b==2)
        {
            if(a==1)
            {
                cout<<"Yes"<<endl;
                cout<<1<<" "<<3<<" "<<4<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
                b*=a;
                z=a*b;
                b--;
                y=a*b;
                x=a;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }

        }
        else
        {
            cout<<"Yes"<<endl;
            z=a*b;
            b--;
            y=a*b;
            x=a;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
}
