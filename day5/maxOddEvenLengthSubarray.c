#include<stdio.h>
#include<limits.h>
void maxlenoddeven(int arr[],int n){
  int count=1,max=1;
  for(int i=1;i<n;i++){
    if((arr[i-1]%2==0&&arr[i]%2!=0)||(arr[i-1]%2!=0&&arr[i]%2==0)){
      count++;
    }
    else {
      if(count>max) max=count;
      count=1;
    }
  }
  printf("%d",max);
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  maxlenoddeven(arr,n);
  return 0;
}
