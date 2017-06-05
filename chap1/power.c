#include <stdio.h>
int i;
int power(int base,int times);

int main(){
    printf("%d\n",power(3,3));
    return 0;
    }
int power(int base,int times){
    int powern = 1;
    for(i=0;i<times;i++)
	powern*=base;
    return powern;
}
