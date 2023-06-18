#include<bits/stdc++.h>
using namespace std;

map<long long int,long long int>freq;
int main()
{
    long long int n,c;
    scanf("%d",&n);
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(long long int i=0;i<n;i++){
        c=freq[arr[i]]++;
    }
    long long int x=0,y=0;
    for(long long int i=0;i<n;i++){
        x=max(freq[arr[i]],x);
    }
    printf("%d\n",x);


    return 0;
}
