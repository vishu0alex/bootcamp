#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if((n&(n-1)==0))
    printf("yes");
    else printf("no");
    return 0;
}

