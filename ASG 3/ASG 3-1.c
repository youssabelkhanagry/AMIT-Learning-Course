#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;

}

int main()
{
    int m=20;
    int n=30;
    printf("m= %d , n=%d",m,n);

    swap(&m,&n);
    printf("m= %d , n=%d",m,n);

}
