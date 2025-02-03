#include<stdio.h>
#include<limits.h>
int seclar(int arr[],int n){
  int max=INT_MIN,sec=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      sec=max;
      max=arr[i];
    } 
    else if(arr[i]>sec&&arr[i]!=max)
    sec=arr[i];
  }
  return sec;
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("%d",seclar(arr,n));
  return 0;
}
