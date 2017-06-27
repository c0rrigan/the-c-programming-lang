#include <stdio.h>
#include <assert.h>
#define MAXBUFFSIZE 50

char buff[MAXBUFFSIZE];
void concat(char *,char *);
int strsize(char *);

int main(){
    char st[]="word";
    char st2[]="word2";
    concat(st,st2);
    printf("%s\n",buff);
    return 0;
}
void concat(char *s,char *t){
    int i;
    int n = strsize(s)+strsize(t);
    if(n<=MAXBUFFSIZE){
	for(i=0;(buff[i]=*s)!='\0';i++,s++);
	for(;(buff[i]=*t)!='\0';i++,t++);
    }
}
int strsize(char *c){
    int i;
    for(i=0;*c!='\0';c++,i++)
	;
    return i;
}
