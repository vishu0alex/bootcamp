#include<stdio.h>
int frequency(int arr[],int n){
    int count=1;
    for(int i=0;i<n;i++){
    
       if( arr[i]==arr[i+1])
         count++;
     else{
          printf("%d has frequency %d\n",arr[i],count);
          count=1;
       }
    }
}
    
int main(){
    int n=8,arr[8]={1,2,2,3,3,4,4,4};
    frequency(arr,n);
    return 0;
}
