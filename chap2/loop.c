#include <stdio.h>
#define STRING_MAX_LENGTH 1000
int main(){
    int next=1;
    char s[STRING_MAX_LENGTH]; 
    int c,i;
    for(i=0;next==1;i++){
	if(i<STRING_MAX_LENGTH-1){
	    if((c=getchar())!='\n'){
		if(c!=EOF){
		    s[i]=c;
		}else{
		    next=0;}
	    }else{
		next=0;}
	}else{
	    next=0;}
    }
    for(i=0;s[i]!='\0';i++)
	printf("%c",s[i]);
return 0;
}
