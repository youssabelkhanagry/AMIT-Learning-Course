#include <stdio.h>

int main(){
    float a;
    float b;
    float result;

    printf("enter the first number\n");
    scanf("%f", &a);

    printf("enter the second number\n");
    scanf("%f", &b);

    result = a+b;
    printf("Addition is %.2f\n",result);

    result = a-b;
    printf("subtraction is %.2f\n",result);

    result = a*b;
    printf("Multiplication is %.2f\n",result);

    result = a/b;
    printf("Divison is %.2f\n",result);

    
    return 0;
}