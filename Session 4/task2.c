#include <stdio.h>

int main(){
    char opp;
    unsigned int a;
    unsigned int b;
    int result;

    printf("Enter the first number\n");
    scanf("%i", &a);

    printf("Enter the second number\n");
    scanf("%i", &b);

    printf("Enter your opperation\n");
    scanf(" %c", &opp);

   switch (opp)
   {
    case '+':
    result = a+b;
    printf("Your result is %i\n",result);
   break;
    case '-':
    result = a-b;
    printf("Your result is %i\n",result);
   break;
    case '*':
    result = a*b;
    printf("Your result is %i\n",result);
   break;
    case '/':
    if(b==0){
        break;
    }else{
    result = a/b;
    printf("Your result is %i\n",result);
    }
   break;
   
   default:
       printf("Your have enteered invalid opperation\n");

    break;
   }


    return 0;
}