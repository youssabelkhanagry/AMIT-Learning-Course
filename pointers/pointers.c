#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0x55667788;
    char * ptr = &x;
    printf("%x", *ptr);
    return 0;
}
