#include<stdio.h>
void rotateclockwise(int arr[3][3],int n,int m){
    int res[3][3],temp;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        res[i][j]=arr[j][i];
        }
    }
    //clock wise
     for(int i=0;i<n;i++){
        temp=res[i][m-1];
        res[i][m-1]=res[i][0];
        res[i][0]=temp;
     }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
void rotateanticlockwise(int arr[3][3],int n,int m){
    int res[3][3],temp;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        res[i][j]=arr[j][i];
        }
    }
     //anticlock wise
     for(int j=0;j<m;j++){
        temp=res[n-1][j];
        res[n-1][j]=res[0][j];
        res[0][j]=temp;
     }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
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
    // rotateclockwise(arr,n,m);
    rotateanticlockwise(arr,n,m);
}
