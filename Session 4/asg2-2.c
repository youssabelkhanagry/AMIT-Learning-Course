#include <stdio.h>

int main(){
    unsigned int num;


    printf("Enter the number\n");
    scanf("%i", &num);

    if(num==153){
    printf("armstrong number %d\n", num);

    }else{
    printf("not armstrong number %d\n", num);

    }


    return 0;
}