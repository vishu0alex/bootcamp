#include<stdio.h>
void productexceptself(int arr[],int n){
  for(int i=0;i<n;i++){
    if((arr[i-1]<arr[i])&&(arr[i]>arr[i+1]))
    printf("%d",arr[i]);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  productexceptself(arr,n);
  return 0;
}

//or by binary search
