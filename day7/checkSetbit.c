#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    if(1&(n>>k)) printf("set");  //n&(1<<k)
    else printf("not set");
    return 0;
}
