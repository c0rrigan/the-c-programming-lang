#include <stdio.h>
#define TAB 4
void printSpaces(int n);
int main(){
    int c,cspace,state;
    state=cspace=0;
    while((c=getchar())!=EOF){
	if(c==' '){
	    state=1;
	    cspace++;
	}
	else{
	    if(state==1)
		printSpaces(cspace);
	    state=0;
	    cspace=0;
	    printf("%c",c);
	}
    }
    printf("\n");
    return 0;
   }
void printSpaces(int n){
    while(n>0){
	if(n>=TAB){
	   printf("(tab)");
	   n-=TAB;
	}
	else{
	   printf("(spc)");
	   n--;
	}
    }
}
