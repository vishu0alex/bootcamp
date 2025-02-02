#include<stdio.h>
#include<string.h>
int stringPalindrome(char arr[],int n,int i){
    if(i>=n) return 1;
    if(arr[i]!=arr[n]) return 0;
    return stringPalindrome(arr,n-1,i+1);
}

int main(){
    char arr[100];
    scanf("%s",arr);
    int n=strlen(arr)-1;
   
    if(stringPalindrome(arr,n,0))
    printf("yes");
    else printf("no");

    return 0;
}
