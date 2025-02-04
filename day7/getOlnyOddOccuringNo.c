#include<stdio.h>
int oddOccuringNo(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }
    return res;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",oddOccuringNo(arr,n));
    return 0;
}

