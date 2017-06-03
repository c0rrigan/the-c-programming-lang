#include <stdio.h>

int main(){
    int lines,c,spaces,tabs;
    spaces=tabs=lines=0;
    while((c=getchar())!=EOF){
	if(c=='\t')
	    printf("\\t");
	if(c=='\b')
	    printf("\b");
	if(c!='\b'||c!='\t')
	    printf("%c",c);
    }
    return 0;
}
