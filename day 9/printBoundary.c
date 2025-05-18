#include<stdio.h>
void printboundary(int arr[4][4],int n ,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||i==n-1||j==0||j==m-1)
            printf("%d ",arr[i][j]);
            else printf("  ");        }
        printf("\n");
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[4][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printboundary(arr,n,m);
}
