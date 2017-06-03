#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    int state,c,words,lines,chars;
    state=c=words=chars=0;
    state=OUT;
    while((c=getchar())!=EOF){
	    if(c==' '||c=='\t'||c=='\n')
		printf("\n");
		//state=OUT;
	    else if(state==OUT){
		//state=IN;
		printf("%c",c);
	    }
	}
    printf("\nDone!\n");
    return 0;
}

    
