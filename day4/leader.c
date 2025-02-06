#include<stdio.h>
void movezerotoEnd(int arr[],int n){
  int flag=1;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]<arr[j])
      flag=0;
    }
    if(flag) printf("%d ",arr[i]);
   else if(i==n-1) printf("%d",arr[n-1]);
    flag=1;
  }
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
                               //optimal

#include<stdio.h>
void movezerotoEnd(int arr[],int n){
 int rmax=arr[n-1];
 printf("%d ",rmax);
 for(int i=n-2;i>=0;i--){
  if(arr[i]>=rmax){
    rmax=arr[i];
    printf("%d ",rmax);
  }
 }
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
