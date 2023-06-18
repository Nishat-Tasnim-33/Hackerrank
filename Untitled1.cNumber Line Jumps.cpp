#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void jump()

{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if((b>d)&&((c-a)%(b-d))==0) cout<< "YES"<<endl;
    else cout<< "NO"<<endl;
}


int main()
{
    jump();
    return 0;
}
