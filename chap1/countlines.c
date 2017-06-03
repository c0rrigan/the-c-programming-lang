#include <stdio.h>

int main(){
    int lines,c;
    lines=0;
    while((c=getchar())!=EOF){
	if(c=='\n')
	    lines++;
    }
   printf("%d\n",lines); 
    return 0;
}
