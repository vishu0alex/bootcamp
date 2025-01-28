#include<stdio.h>
int main(){
    int n,ori,rev=0;
    scanf("%d",&n);
    ori=n;

    while(n!=0){
         rev=rev*10+n%10;
         n/=10;
    }
    if(ori==rev)
    printf("yes");
    else printf("no");
    return 0;
}
