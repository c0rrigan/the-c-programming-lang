#include <stdio.h>
#define INLINECOMMENT_ON 1
#define INLINECOMMENT_OFF 0
#define MULTICOMMENT_ON 2
#define MULTICOMMENT_OFF 3

int main(){
    int c,prevc,state;
    prevc=state=0;
    while((c=getchar())!=EOF){
	if(state==INLINECOMMENT_ON || state==MULTICOMMENT_ON){
	    if(state==INLINECOMMENT_ON){
		if(c=='\n')
		    state=INLINECOMMENT_OFF;
	    }
	    if(state==MULTICOMMENT_ON){
		if(prevc=='*'&& c=='/')
		    state=MULTICOMMENT_OFF;
	    }
	 }
	else if(c=='/'){
	    if(prevc=='/')
		state=INLINECOMMENT_ON;
	}
	else if(c=='*'){
	    if(prevc=='/')
		state=MULTICOMMENT_ON;
	}
	else{
	    printf("%c",c);
	}
	prevc=c;
    }
    return 0;
}
