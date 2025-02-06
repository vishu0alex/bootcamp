#include<stdio.h>
void movezerotoEnd(int arr[],int n){
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0)
      arr[j++]=arr[i];
  }
  while(j<n)
  arr[j++]=0;
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}

int main(){
  int n,d;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  movezerotoEnd(arr,n);
  return 0;
}
