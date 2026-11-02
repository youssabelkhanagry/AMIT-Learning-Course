#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[9];
    int a;
    int b = 0b00000111;  
    int result;

    printf("enter 8 bit binary number\n");
    scanf("%8s", input);

    a = strtol(input, NULL, 2); 

    result = a | b;        

    printf("Your new binary number is ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");

    return 0;
}