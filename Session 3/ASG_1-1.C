#include <stdio.h>

int main(){
    int num;
    int odd, even;

    printf("Enter the number\n");
    scanf("%d", &num);

    odd  = num & 1;    
    even = odd ^ 1;   

    printf("The number is odd  = %d\n", odd);
    printf("The number is even = %d\n", even);

    return 0;
}