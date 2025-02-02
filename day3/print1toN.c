#include<stdio.h>
int print(int m,int n){
    printf("%d ",m);
    if(m==n) return m;
    return print(m+1,n);
}


int main(){
    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}
