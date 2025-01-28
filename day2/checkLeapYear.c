#include<stdio.h>

void leap(int a){
   if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    printf("yes");
    else printf("no");
}

int main(){
    int a;
    scanf("%d",&a);
    leap(a);
   return 0;
}
