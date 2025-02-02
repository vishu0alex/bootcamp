#include<stdio.h>
#include<string.h>
void reverse(char arr[],int n,int i){
    if(i>=n) return;
    int temp=arr[i];
    arr[i]=arr[n];
    arr[n]=temp;
    return reverse(arr,n-1,i+1);
}
// void reverse(char arr[],int n,int i){
//     if(i>=n/2) return;
//     int temp=arr[i];
//     arr[i]=arr[n-i];
//     arr[n-i]=temp;
//     return reverse(arr,n,i+1);
// }

int main(){
    char arr[100];
    scanf("%s",arr);
    int n=strlen(arr)-1;
    reverse(arr,n,0);

    printf("%s",arr);
    
    return 0;
}
