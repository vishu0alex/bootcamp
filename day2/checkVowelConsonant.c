#include<stdio.h>

void findchar(char ch){
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   printf("vowel");
   else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
   printf("consonant");
   else
   printf("special character");
}

int main(){
    char ch;
    scanf("%c",&ch);
    findchar(ch);
   return 0;
}
