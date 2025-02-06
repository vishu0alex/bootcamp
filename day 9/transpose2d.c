#include<stdio.h>
void transpose(int arr[3][3],int n,int m){
    int res[3][3];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        res[i][j]=arr[j][i];
         printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(arr,n,m);
}
