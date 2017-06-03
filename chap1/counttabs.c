#include <stdio.h>

int main(){
    int lines,c,spaces,tabs;
    spaces=tabs=lines=0;
    while((c=getchar())!=EOF){
	if(c=='\n')
	    lines++;
	if(c=='\t')
	    tabs++;
	if(c==' ')
	    spaces++;
    }
   printf("Lines :%d\n",lines); 
   printf("Tabs :%d\n",tabs); 
   printf("Spaces :%d\n",spaces); 
    return 0;
}
