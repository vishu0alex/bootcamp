#include<stdio.h>
void prefixsumarray(int arr[],int n){
  int prefix[n];
  prefix[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix[i]=arr[i]+prefix[i-1];
  }
  for(int i=0;i<n;i++){
  printf("%d ",prefix[i]);
 } 
}

int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 } 
 prefixsumarray(arr,n);
 return 0;
}
