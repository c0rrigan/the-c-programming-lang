#include <stdio.h>
#include <ctype.h>
#include "getch.h"

int getfloat(float *);

int main(){
    /*float f;
    getfloat(&f);
    printf("%f\n",f);*/
    int i;
    int arrsize=3;
    float numbers[arrsize];
    for(i=0;getfloat(&numbers[i])!=EOF&&i<arrsize;i++);
    for(i=0;i<arrsize;i++)
	printf("%d = %3.3f\n",i,numbers[i]);
    return 0;
}

int getfloat(float *fl){
    int c;
    int sign;
    int decimal;
    //Ignore spaces
    while(isspace(c=getch()))
	;
    //Ignore characters that aren't digits or signs
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-'){
	ungetch(c);
	return 0;
    }
    sign = (c=='-')?-1:1; 
    if(c=='-' || c=='+')
	c=getch();
    for(*fl=0.0;isdigit(c);c=getch())
	*fl=10* *fl+(c-'0');
    if(c=='.'){
	c=getch();
	for(decimal=1;isdigit(c);c=getch()){
	    *fl=10* *fl+(c-'0');
	    decimal*=10; 
	}
    }
    *fl/=decimal;
    *fl *=sign;
    if(c!=EOF)
	ungetch(c);
    return c;
} 
