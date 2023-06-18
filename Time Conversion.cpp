#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s;
    char st[10];
    scanf("%d:%d:%d%s",&h,&m,&s,&st);
    if(st[0]=='P')
    {
        if(h<12)
        {
            int  b = h+12;
            printf("%02d:%02d:%02d\n",b,m,s);
        }
        else if(h==12)
        {
            int b=12+00;
            printf("%02d:%02d:%02d\n",b,m,s);
        }
    }
    else if(st[0]='A')
    {
        if(h==12)
        {
            h=00;
            printf("%02d:%02d:%02d\n",h,m,s);
        }
        else
        {
            printf("%02d:%02d:%02d\n",h,m,s);
        }
    }
    return 0;
}
