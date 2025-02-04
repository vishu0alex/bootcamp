#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    while(n>0){
        if(n&1)
        count++;
        n=n>>1;
    }
    printf("%d",count);
    return 0;
}


//brianKernighan algo

// while(n>0){
//     n=n&(n-1);
//     count++;
// }
// printf("%d",count);
