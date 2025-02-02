#include<stdio.h>
int countdigit(int n){
    if(n==0) return 0;
    return 1+countdigit(n/10);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",countdigit(n));
    return 0;
}
