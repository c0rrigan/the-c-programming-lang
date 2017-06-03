#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    int state,c,words,lines,chars;
    state=c=words=lines=chars=0;
    state=OUT;
    while((c=getchar())!=EOF){
	    ++chars;
	    if(c=='\n')
		lines++;
	    if(c==' '||c=='\t'||c=='\n')
		state=OUT;
	    else if(state==OUT){
		state=IN;
		++words;
	    }
	}
    printf("%d %d %d\n",lines,words,chars);
    return 0;
}

    
