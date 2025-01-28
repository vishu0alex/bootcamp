#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum=0,rem;
    scanf("%d",&n);
    int ori=n;
    while(n!=0){
         n=n/10;
         count++;
    }
       n=ori;
       while(n!=0){
        rem=n%10;
        int temp=1;

        for(int i=1;i<=count;i++){
            temp=temp*rem;
        }
        sum+=temp;
        n/=10;
       }

       if(ori==sum) printf("yes");
       else printf("no");

    return 0;
}
