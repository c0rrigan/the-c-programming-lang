#include <stdio.h>
#define TAB 15

int main(){
    int c;
    while((c=getchar())!=EOF){
	if(c=='\t')
	    for(int i=0;i<TAB;i++)
		printf(" ");
	else
	    printf("%c",c);
    }
    return 0;
}
