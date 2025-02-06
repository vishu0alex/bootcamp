#include<stdio.h>
#include<limits.h>
void maxdifference(int arr[],int n){
  int min=INT_MAX,max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]<min)
    min=arr[i];
    if(arr[i]>max)
    max=arr[i];
  }
  printf("%d",max-min);
}
int main(){
  int n,d;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  maxdifference(arr,n);
  return 0;
}
