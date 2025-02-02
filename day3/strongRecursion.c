#include<stdio.h>
int fact(int n){
   if(n==0||n==1) return 1;
   return n*fact(n-1);
}

int isstrong(int n,int sum,int ori){
    if(n==0) return sum==ori;
    sum+=fact(n%10);
    return isstrong(n/10,sum,ori);
}

int main(){
    int n;
    scanf("%d",&n);
    if(isstrong(n,0,n)) printf("yes");
    else printf("no");
    return 0;
}
