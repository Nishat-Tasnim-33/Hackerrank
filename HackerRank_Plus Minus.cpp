#include<iostream>

int main()
{
    int n,c=0,b=0,d=0;
    double e,f,g;
    scanf("%d",&n);
    int a[n];
    int i=0;
    while(i<n){
        scanf("%d",&a[i]);
        if(a[i]>0){
            b++;
        }
        else if(a[i]<0){
            c++;
        }
        else if(a[i]==0){
            d++;
        }
        i++;
    }
        e=(float)b/(float)n;
        f=(float)c/(float)n;
        g=(float)d/(float)n;
        printf("%.6lf\n",e);
        printf("%.6lf\n",f);
        printf("%.6lf\n",g);
    return 0;
}
