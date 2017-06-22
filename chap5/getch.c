#include <stdio.h>
#define MAXBUFF	10

int buffpos=0;
int buff[MAXBUFF];
int getch(void){
    return (buffpos>0)?buff[--buffpos]:getchar();
}
void ungetch(int c){
    if(buffpos>=MAXBUFF)
	printf("Buffer overload");
    else 
	buff[buffpos++]=c;
}
