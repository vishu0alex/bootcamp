#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=1;j<=n-i+1;j++){
            printf("%c",a++);
        }
        
         for(int j=1;j<=2*i-2;j++){
            printf(" ");
        }
        
         a--;
         for(int j=n-i+1;j>=1;j--){
            printf("%c",a--);
        }
        printf("\n");
    }
    return 0;
}
