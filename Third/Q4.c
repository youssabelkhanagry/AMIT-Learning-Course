#include <stdio.h>
#include <stdlib.h>

void drawX(int size)
{
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (col == row || col == size - 1 - row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
 
void drawDiamond(int n)
{
    for (int row = 1; row <= n; row++) {
        for (int s = 1; s <= n - row; s++)
            printf(" ");
        for (int st = 1; st <= 2 * row - 1; st++)
            printf("*");
        printf("\n");
    }
    for (int row = n - 1; row >= 1; row--) {
        for (int s = 1; s <= n - row; s++)
            printf(" ");
        for (int st = 1; st <= 2 * row - 1; st++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    int size;
 
    printf("Enter size of the X (odd number looks best): ");
    scanf("%d", &size);
    printf("\nX pattern:\n");
    drawX(size);
 
    printf("\nEnter number of rows for half the diamond: ");
    scanf("%d", &size);
    printf("\nDiamond pattern:\n");
    drawDiamond(size);
 
    return 0;
}