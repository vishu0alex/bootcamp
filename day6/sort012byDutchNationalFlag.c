//brute O(n+n)

#include<stdio.h>
void sort(int arr[],int n){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}

//dutch national flag 

#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(&arr[mid],&arr[low]);
            low++;mid++;
        }
        else if(arr[mid]==1){
                 mid++;
        }
        else {
            swap(&arr[high],&arr[mid]);
            high--;
        }  
    }   
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
