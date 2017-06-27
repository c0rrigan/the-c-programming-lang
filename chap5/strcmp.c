#include <stdio.h>
int strcmp(char *,char *);
int main(){
    char s[]="will";
    char t[]="well";
    printf("%d\n",strcmp(s,t));
    return 0;
}
int strcmp(char *s,char *t){
    for(;*s==*t;*s++,*t++)
	if(*s=='\0')
	    return 0;
    return *s - *t;
}
