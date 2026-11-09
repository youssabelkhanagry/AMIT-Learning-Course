#include <stdio.h>

int fibRecursive(int n){
    if (n <= 1)
        return n;        
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

void fibIterative(int terms){
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++)
    {
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main(){
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibIterative(n);

    printf("Please enter your preferred number of elements here: ");
    scanf("%d", &n);
    printf("The Fibonacci Series will be: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fibRecursive(i));
    printf("\n");

    return 0;
}