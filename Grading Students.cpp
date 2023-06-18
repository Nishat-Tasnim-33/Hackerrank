#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a;
        if(a>37)
        {
            if((a+1)%5==0)
            {
                b=a+1;
            }
            else if((a+2)%5==0)
            {
                b=a+2;
            }
            else
            {
                b=a;
            }
        }
        else
        {
            b=a;
        }
        cout<<b<<'\n'<<endl;
    }
}
