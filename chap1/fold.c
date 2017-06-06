#include <stdio.h>

#define TAB 4 //Tab length
#define MAX_LENGTH 12 //Max line length
/**Program to "fold" long input lines into two or more shorter lines
 * after the last non-blank character that occurs before the n-th 
 * column of input
 */
int main(){
    int charc,c;
    charc=0;
    while((c=getchar())!=EOF){
	if(c=='\t'){
	    if((charc+TAB)>=MAX_LENGTH){
		for(int i=0;i<(MAX_LENGTH-charc);i++)
		    printf("█");
		printf("\n");
		for(int i=0;i<((charc+TAB)-MAX_LENGTH);i++)
		    printf("█");
		charc=(charc+TAB)-MAX_LENGTH;
	    }else{
		for(int i=0;i<TAB;i++)
		    printf("█");
		charc+=4;
	    }
	}else{
	    if(charc==MAX_LENGTH){
		printf("\n");
		charc=0;
	    }
	    printf("%c",c);
	    charc++;
	}
    }
    return 0;
}
