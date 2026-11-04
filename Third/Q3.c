#include <stdio.h>
#include <stdlib.h>

unsigned int addUnsignedChar(unsigned char a, unsigned char b)
{
    return (unsigned int)a + (unsigned int)b;
}

int main(){
     unsigned int inA, inB;
    unsigned char a, b;
 
    printf("Enter first number (0-255): ");
    scanf("%u", &inA);
    printf("Enter second number (0-255): ");
    scanf("%u", &inB);
 
    if (inA > 255 || inB > 255) {
        printf("Error: unsigned char values must be between 0 and 255.\n");
        return 1;
    }
 
    a = (unsigned char)inA;
    b = (unsigned char)inB;
 
    unsigned int sum = addUnsignedChar(a, b);
    printf("%u + %u = %u\n", a, b, sum);
 
    if (sum > 255) {
        printf("Note: the sum does not fit in an unsigned char "
               "(it would wrap around to %u).\n", (unsigned char)sum);
    }
 
    return 0;

}
