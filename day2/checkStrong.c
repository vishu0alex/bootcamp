#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int ori=n;
   while(n!=0){
    int fact=1;
    for(int i=1;i<=n%10;i++){
        fact*=i;
    }
    sum+=fact;
    n/=10;
   }
   if(sum==ori) printf("yes");
   else printf("no");
    return 0;
}
