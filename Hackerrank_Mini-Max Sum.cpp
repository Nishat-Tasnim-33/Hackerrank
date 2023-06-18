#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+5);
    int x=0,y=0;
    for(int j=0;j<4;j++){
        x+=a[j];
    }
    for(int j=1;j<5;j++){
        y+=a[j];
    }
    printf("%d\n%d\n",x,y);
    return 0;
}
