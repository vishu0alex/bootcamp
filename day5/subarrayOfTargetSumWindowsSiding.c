// brute force

#include<stdio.h>
#include<limits.h>
void subtargetsum(int arr[],int n,int sum){
  int cursum=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      cursum+=arr[j];
      if(cursum==sum)
      printf("found at index from %d to %d ",i,j);
    }
    cursum=0;
  }
}
int main(){
  int n,sum;
  scanf("%d%d",&n,&sum);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  subtargetsum(arr,n,sum);
  return 0;
}

//optimal

