#include <stdio.h>

int multiply(int x,int y){
    return (x*y);
}
int divide(int x,int y){
    return (x/y);
}
int sum(int x,int y){
    return (x+y);
}
int sub(int x,int y){
    return (x-y);
}

int main()
{
    unsigned int a;
    unsigned int b;
    int ret = 0;
    
    printf("Enter the first number\n");
    scanf("%i", &a);

    printf("Enter the second number\n");
    scanf("%i", &b);

    ret = multiply(a,b);
    printf("Your multiplication result is %i\n",ret);

    ret = divide(a,b);
    printf("Your division result is %i\n",ret);

    ret = sum(a,b);
    printf("Your sum result is %i\n",ret);

    ret = sub(a,b);
    printf("Your sub result is %i\n",ret);

    return 0;
}
