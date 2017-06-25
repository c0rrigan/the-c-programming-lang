#include <stdio.h>
#include <ctype.h>
#include "getch.h"
int getint(int*);
int main(){
    int arrsize = 3;
    int arr[arrsize];
    int i;
    for (i = 0;getint(&arr[i])!=EOF&&i<arrsize;i++);
    for (i = 0;i<arrsize;i++)
	printf("%d\n",arr[i]);
    return 0;
}
int getint(int *pn){
    int c,sign;

    //Skip spaces
    while(isspace(c=getch()))
	;
    if(!isdigit(c) && c!=EOF && c!='+' && c!='-'){
	ungetch(c);
	return 0;
    }
    sign = (c=='-')?-1:1;
    if(c=='+' || c=='-')
	c=getch();
    if(c==EOF || c=='\n')
	ungetch(c);
    for(*pn = 0;isdigit(c);c=getch())
	*pn = 10 * *pn + (c-'0');
    *pn *=sign;
    if(c!=EOF)
	ungetch(c);
    return c;
}
