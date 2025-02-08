// brute force

#include<stdio.h>
#include<limits.h>
void maxsumsubinSize(int arr[],int n,int k){
  int cursum=0,maxsum=INT_MIN;
  for(int i=0;i<=n-k;i++){
    for(int j=i;j<k+i;j++){
      cursum+=arr[j];
    }
    if(cursum>maxsum)
    maxsum=cursum;
    cursum=0;
  }
  printf("%d ",maxsum);
}
void minsumsubinSize(int arr[],int n,int k){
  int cursum=0,minsum=INT_MAX;
  for(int i=0;i<=n-k;i++){
    for(int j=i;j<k+i;j++){
      cursum+=arr[j];
    }
    if(cursum<minsum)
    minsum=cursum;
    cursum=0;
  }
  printf("%d",minsum);
}
int main(){
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  maxsumsubinSize(arr,n,k);
  minsumsubinSize(arr,n,k);
  return 0;
}

// optimal solution sliding window

#include<stdio.h>
#include<limits.h>
void maxsumsubinSize(int arr[],int n,int k){
  int maxsum,total=0;
  for(int i=0;i<k;i++)
    total+=arr[i];
    maxsum=total;
  for(int i=0;i<n-k;i++){
    total=total-arr[i]+arr[i+k];
    if(total>maxsum)
    maxsum=total;
  }
  printf("%d ",maxsum);
}
void minsumsubinSize(int arr[],int n,int k){
  int minsum,total=0;
  for(int i=0;i<k;i++)
    total+=arr[i];
    minsum=total;
  for(int i=0;i<n-k;i++){
    total=total-arr[i]+arr[i+k];
    if(total<minsum)
    minsum=total;
  }
  printf("%d ",minsum);
}
int main(){
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  maxsumsubinSize(arr,n,k);
  minsumsubinSize(arr,n,k);
  return 0;
}

