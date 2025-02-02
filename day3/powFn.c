#include<stdio.h>
int powers(int base,int power){
    if(power==0) return 1;
    return base*powers(base,power-1);
}

int main(){
    int base,power;
    scanf("%d%d",&base,&power);
    printf("%d",powers(base,power));
    return 0;
}
