#include<stdio.h>

void tribyangle(int a,int b,int c){
 if(a+b+c==180) printf("yes");
 else printf("no");
}

void tribyside(int a,int b,int c){
    if(a+b>c&&a+c>b&&b+c>a) printf("yes");
    else printf("no");
}

int main(){
   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    tribyangle(a,b,c);
   return 0;
}
