#include<stdio.h>

int main(){
  int n=5;
  for(int i=1;i<=n;i++){
    int a=65;
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }

     for(int j=1;j<=i;j++){
        printf("%c",a);
        a++;
    }
    a--;
     for(int j=i-1;j>=1;j--){
         a--;
        printf("%c",a);
    }

    printf("\n");
  }
  
  return 0;
}
