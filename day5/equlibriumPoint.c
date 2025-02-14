//optimal

#include<stdio.h>
#include<stdlib.h>
void equilibrium(int arr[],int n){
  int leftsum=0,total=0;
   for(int i=0;i<n;i++){
    total+=arr[i];
  }
  for(int i=0;i<n;i++){
    total-=arr[i];
     if(leftsum==total){
      printf("equilibrium index point %d",i);
      return;
    }
    leftsum+=arr[i];
  }
  printf("not found");
}
int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 } 
 equilibrium(arr,n);
 return 0;
}
// brute force

#include<stdio.h>
#include<stdlib.h>
void equilibrium(int arr[],int n){
   for(int i=0;i<n;i++){
     int leftsum=0,rightsum=0;
     for(int j=0;j<i;j++){
        leftsum+=arr[j];
     }
     for(int k=i+1;k<n;k++){
        rightsum+=arr[k];
     }
     if(leftsum==rightsum){
      printf("equilibrium index point %d",i+1);
      return;
    }
  }
  printf("not found");
}
int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 } 
 equilibrium(arr,n);
 return 0;
}
