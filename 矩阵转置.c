#include<stdio.h>
int main(){
    int m,n;
    int a[10001];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",& a[j+i*m]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i+j*m]);
        }
        printf("\n");
    }
    return 0;
}