#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,e,n,m;
    cin>>s>>t>>a>>e>>n>>m;
    int ap[n];
    int Or[m];
    int c=0,d=0,b=0;
    for(int j=0; j<n; j++)
    {
        cin>>ap[j];
        b=a+ap[j];
        if(b>=s&&b<=t)
        {
            c++;
        }
    }
    for(int j=0; j<m; j++)
    {
        cin>>Or[j];
        b=e+Or[j];
        if(b>=s&&b<=t)
        {
            d++;
        }
    }
    cout<<c<<"\n"<<d<<endl;
    return 0;
}

