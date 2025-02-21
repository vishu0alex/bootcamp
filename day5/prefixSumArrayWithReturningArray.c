#include<stdio.h>
#include<stdlib.h>
int* prefixsumarray(int arr[],int n){
  int* prefix=(int*)malloc(n*sizeof(int));
  prefix[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix[i]=arr[i]+prefix[i-1];
  }
 return prefix;
}
void getsubsum(int prefix[],int n,int l,int r){
  if(l==0)
  printf("%d",prefix[r]);
  else 
  printf("%d",prefix[r]-prefix[l-1]);
}

int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 } 
 int* prefix=prefixsumarray(arr,n);
 int l,r;
 scanf("%d%d",&l,&r);//index value;
 getsubsum(prefix,n,l,r);
 free(prefix);
 return 0;
}
