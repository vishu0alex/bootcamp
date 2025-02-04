#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    if(1&(n>>k)) printf("set");
    else printf("not set");
    return 0;
}
