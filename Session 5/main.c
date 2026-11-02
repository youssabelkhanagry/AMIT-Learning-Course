#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

int max = 90;


int main(){

    static int x =30;

    int a = 90;
    int b = 10;

    int ret1, ret2;

    ret1 = add(a,b);
    ret2 = sub(a,b);
    
    printf("your sum is %d", ret1);
    printf("your sub is %d", ret2);


}
