#include<stdio.h>
int count(int arr[],int n){
    int count=1, max=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i])
        count++;

        else if(max<count){
            max=count;
            count=1;
        }
    }
    printf("%d",max);
    return 0;
}

int main(){
    int arr[]={0,1,1,1,0,1,1,0},n=8;
    count(arr,n);
    return 0;
}
