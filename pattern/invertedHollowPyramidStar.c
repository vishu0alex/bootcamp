#include<stdio.h>

int main(){
  int n=5;
  for(int i=1;i<=n;i++){

    for(int j=1;j<=i-1;j++){
        printf(" ");
    }

     for(int j=1;j<=2*n-2*i+1;j++){
        if(j==1||j==2*n-2*i+1||i==1)
        printf("*");
        else printf(" ");
    }

    printf("\n");
  }
  
  return 0;
}
