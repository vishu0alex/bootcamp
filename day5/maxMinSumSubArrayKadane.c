//kadane algo
#include<stdio.h>
#include<limits.h>
void maxsubsum(int arr[],int n){
  int cursum=0,maxsum=INT_MIN;
  for(int i=0;i<n;i++){
    cursum+=arr[i];
    if(cursum>maxsum)
    maxsum=cursum;
    if(cursum<0)
    cursum=0;
  }
  printf("%d\n",maxsum);
}
void minsubsum(int arr[],int n){
  int cursum=0,minsum=INT_MAX;
  for(int i=0;i<n;i++){
    cursum+=arr[i];
    if(cursum<minsum)
    minsum=cursum;
    if(cursum>0)
    cursum=0;
  }
  printf("%d\n",minsum);
}
int main(){
  int n,d;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  maxsubsum(arr,n);
  minsubsum(arr,n);
  return 0;
}
