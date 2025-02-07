//sorted
#include<stdio.h>
int majority(int arr[],int n){
    int count=1;

   for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
              if(count>n/2){
                printf("majority element = %d ",arr[i]);
                return 0;
              }
        }
    }
    printf("not found");
}

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n;
    printf("enter no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in ");
    input(arr,n);
    majority(arr,n);
    return 0;
}

//unsorted boyer moore voting algo

#include<stdio.h>
#include<limits.h>
void majority(int arr[],int n){
  int count=0,candidate;
  for(int i=0;i<n;i++){
    if(count==0){
      candidate=arr[i];
      count=1;
    }
    else if(arr[i]==candidate) count++;
    else count--;
  }
  count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==candidate)
    count++;
  }
  if(count>n/2) printf("%d",candidate);
  else printf("no majority");
}
int main(){
  int n,d;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  majority(arr,n);
  return 0;
}

