#include<stdio.h>

void find(int a){
   if(a<0) printf("negative");
   else printf("positive");
}

int main(){
    int a;
    scanf("%d",&a);
    find(a);
   return 0;
}                                                                                                                                                               void find(int a){
    a<0?printf("negative"):
   printf("positive");
}
