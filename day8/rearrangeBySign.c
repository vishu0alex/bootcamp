#include<stdio.h>
//brute force
void rearrangebysign(int arr[],int n){
  int pos[n/2],neg[n/2],j=0,k=0;
  for(int i=0;i<n;i++){
    if(arr[i]<0) neg[j++]=arr[i];
    else pos[k++]=arr[i];
  }
  j=0;k=0;
  for(int i=0;i<n;i++){
    if((i%2)==0) arr[i]=pos[j++];
    else arr[i]=neg[k++];
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  rearrangebysign(arr,n);
  return 0;
}

//optimal

#include<stdio.h>
void rearrangebysign(int arr[],int n){
  int j=0,k=1,res[n];
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      res[k]=arr[i];
      k+=2;
    } 
    else {
      res[j]=arr[i];
      j+=2;
    }
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  rearrangebysign(arr,n);
  return 0;
}
