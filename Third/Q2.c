#include <stdio.h>
#include <stdlib.h>

int countOnes(int number)
{
    unsigned int n = (unsigned int)number;
    int count = 0;
 
    while (n != 0) {
        count += n & 1;   
        n >>= 1;          
    }
    return count;
}
 

int main(){
  int number;
 
    printf("Enter an integer: ");
    scanf("%d", &number);
 
    printf("Number of ones in the binary of %d = %d\n", number, countOnes(number));
 
    return 0;
   

}
