#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}


int main(){
    int n;
//    int fact=1;
    scanf("%d",&n);
    printf("%d",fact(n));
    // for(int i=1;i<=n;i++){
    //     fact*=i;
    // }
    // printf("%d",fact);
    return 0;
}
