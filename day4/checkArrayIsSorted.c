#include<stdio.h>
int issorted(int arr[],int n){
    int a=0,d=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
        a=1;
        }
         if(arr[i-1]>arr[i]){
        d=1;
        }
    }
    if(a==1&&d==1)
     printf("array is not sorted");
      else   printf("sorted array");
  
}
    
int main(){
    int n=8,arr[8]={1,2,2,3,3,4,4,4};
    issorted(arr,n);
    return 0;
}
