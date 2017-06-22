#include <stdio.h>

int main(){
    int *number;
    int a = 5;
    int b = 6;
    
    printf("a = %d\n",a);
    number = &a;
    *number = 10;
    printf("a = %d\n",a);
    printf("&a = %x\n",&a);
}
