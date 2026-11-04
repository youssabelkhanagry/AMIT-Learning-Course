#include <stdio.h>
#include <stdlib.h>

int divide(double x, double y, double result)
{
    if (y == 0) {
        return 0;               
    }
    result = x / y;
    return 1;
}
 

int main(){
  double x, y, result;
 
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
 
    if (divide(x, y, result)) {
        printf("%.2f / %.2f = %.2f\n", x, y, result);
    } else {
        printf("Error: division by zero is not allowed.\n");
    }
 
    return 0;
   

}
