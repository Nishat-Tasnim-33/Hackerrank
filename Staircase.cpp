#include<iostream>

int main()
{
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-i-1){
                arr[i][j]='#';
            }
            else{
                arr[i][j]=' ';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
