
#include<stdio.h>
void reverse(int arr[],int str,int end){  
  for(int i=str;i<(str+end)/2;i++){
    int temp=arr[i];
    arr[i]=arr[end-(i-str)-1];
    arr[end-(i-str)-1]=temp;
  }
}
void rotatebyDright(int arr[],int n,int d){
  reverse(arr,0,n-d);
  reverse(arr,n-d,n);
  reverse(arr,0,n);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void rotatebyDleft(int arr[],int n,int d){
  reverse(arr,0,d);
  reverse(arr,d,n);
  reverse(arr,0,n);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main(){
  int n,d;
  scanf("%d%d",&n,&d);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  // rotatebyDright(arr,n,d);
  rotatebyDleft(arr,n,d);
  return 0;
}
