#include<stdio.h>
int print(int n){
    printf("%d ",n);
    if(n==1) return n;
    return print(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
