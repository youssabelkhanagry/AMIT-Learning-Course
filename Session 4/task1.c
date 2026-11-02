#include <stdio.h>

int main(){
    unsigned int num;


    printf("Enter the number\n");
    scanf("%i", &num);

    if(num%2==0){
    printf("The number is even = %d\n", num);

    }else{
    printf("The number is odd  = %d\n", num);

    }


    return 0;
}