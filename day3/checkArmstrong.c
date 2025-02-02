#include<stdio.h>
int digitcount(int n,int count){
   if(n==0) return count;
   count++;
   return digitcount(n/10,count);
}

int power(int n,int count){
    if(count==0) return 1;
    return n*power(n,count-1);
}

int isarmstrong(int n,int sum,int ori){
    if(n==0) return sum==ori;
    sum+=power(n%10,digitcount(ori,0));
    return isarmstrong(n/10,sum,ori);
}

int main(){
    int n;
    scanf("%d",&n);
    if(isarmstrong(n,0,n)) printf("yes");
    else printf("no");
    return 0;
}
