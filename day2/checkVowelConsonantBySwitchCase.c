#include<stdio.h>
int main(){
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 'a':
         case 'e':
          case 'i':
           case 'o':
            case 'u':
             case 'A':
              case 'E':
               case 'I':
                case 'O':
                 case 'U':
                 printf("vowel");
                 break;
                  default:
            if ((ch >= 'a' && ch <= 'z')||(ch>='A' && ch<='Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a letter.\n", ch); 
            }
            break;
    }
    return 0;
}
