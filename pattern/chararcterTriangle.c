#include<stdio.h>

int main(){
  int n=5;
  for(int i=1;i<=n;i++){
    int a=65;
    for(int j=1;j<=i;j++){
        printf("%c",a);
        a++;
    }
    printf("\n");
  }
  
  return 0;
}
