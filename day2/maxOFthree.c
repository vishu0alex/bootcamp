#include<stdio.h>
// int max(int a,int b,int c){
//     int res=a>b&&a>c?a:b>c?b:c;
//     return res;
// }

int max(int a,int b,int c){
    if(a>b&&a>c)  return a;
    else if(b>c)  return b;
    else return c;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(a,b,c));
   return 0;
}
