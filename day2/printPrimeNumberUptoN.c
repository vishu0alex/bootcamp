#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        int flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                 flag=1;
                 break;
            }  
        }
        if(flag==0)
        printf("%d ",i);
    }   
     return 0;
}
