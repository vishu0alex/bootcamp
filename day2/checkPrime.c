#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);

   if(n==0||n==1)
   printf("not prime");

   for(int i=2;i<=n/2;i++){
    if(n%i==0)
        count++;
   }

   if(count==0)
   printf("prime");
   else printf("not prime");

    return 0;
}
