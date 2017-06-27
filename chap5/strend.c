#include <stdio.h>
#include "strutils.h"

int strend(char *,char *);

int main(){
    char s[] = "our shareholder";    
    char t[] = "holder";
    printf("%d\n",strend(s,t));
    return 0;
}

int strend(char *s,char *t){
    s+=(strsize(s)-strsize(t));
    while(*s++==*t++)
	if(*t=='\0')
	    return 1;
    return 0;
}
