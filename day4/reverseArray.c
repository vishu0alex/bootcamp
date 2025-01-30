#include<stdio.h>
void reverse(int arr[],int n){
    int temp;
   for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
   }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
    
int main(){
    int n=8,arr[8]={1,2,2,3,3,4,4,4};
    reverse(arr,n);
    print(arr,n);
    return 0;
}
