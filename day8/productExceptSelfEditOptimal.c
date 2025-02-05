//brute force
#include<stdio.h>
void productexceptself(int arr[],int n){
  int res[n],mul=1;
  for(int i=0;i<n;i++){
     mul=1;
     for(int j=0;j<n;j++){
      if(i==j) continue;
      mul*=arr[j];
      res[i]=mul; 
    }
  }
  for(int i=0;i<n;i++){
    printf("%d ",res[i]);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  productexceptself(arr,n);
  return 0;
}

//optimal

#include<stdio.h>
void productexceptself(int arr[],int n){
  int res[n],pro=1,count=0,pro2=1;
  for(int i=0;i<n;i++){
    if(arr[i]==0)
    count++;
  }
  for(int i=0;i<n;i++){
    pro*=arr[i];
    if(arr[i]=0) continue;
    pro2*=arr[i];
  }
  for(int i=0;i<n;i++){
    if(count==0){
      res[i]=pro/arr[i];
    }
    else if(count==1){
      if(res[i]==0){
        res[i]=pro2;
      }
      else arr[i]=0;
    }
    else res[i]=0;
  }
  for(int i=0;i<n;i++){
    printf("%d ",res[i]);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  productexceptself(arr,n);
  return 0;
}

//make left array product and right array product , and multiply it (3rd approach)
//4th approach>> make right product and save it to ans array >>again make ans update by multiplying main array
// one by one 
