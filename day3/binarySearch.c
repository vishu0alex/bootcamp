#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target){
    if(left>right) return -1;
    int mid=left+(right-left)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target) return binarySearch(arr,left,mid-1,target);
    return binarySearch(arr,mid+1,right,target);
}

int main(){
    int n,target;
    scanf("%d%d",&n,&target);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(binarySearch(arr,0,n-1,target)==-1)
    printf("not found");
    else
    printf("%d is at index %d ",target,binarySearch(arr,0,n-1,target));
    return 0;
}
