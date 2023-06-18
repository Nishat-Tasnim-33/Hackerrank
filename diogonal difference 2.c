#include<stdio.h>
int main()
{
    int i,j,n,c,b=0,d,e,f=0,k;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(c=0;c<n;c++){
      b+=a[c][c];
    }
    for(d=0,e=n-1;d<n,e>=0;d++,e--)
           {
        f+=a[d][e];
           }
    printf("%d\n",abs(b-f));
    return 0;
}
