#include <stdio.h>
#define MAX_RANGE 10
int power(int base,int n);
int htoi(char s[]);
int getdecimal(char s,int pos);
int arrsize(char arr[]);
int main(){
    char chars[] = {'0','x','1','1','f'};
    printf("%d\n",htoi(chars));
    return 0;
}
int htoi(char s[]){
    long decimal=0;
    if((s[0]=='0' || s[0] == 'O')&&(s[1]=='x' || s[1]=='X')){
	int narray=arrsize(s)-2;
	char subs[narray];
	for(int i=0;s[i+2]!='\0';i++)
	    subs[i]=s[i+2];
	for(int i=narray;i>0;i--)
	    decimal+=getdecimal(subs[i-1],narray-i);
    }else{
	int narray=arrsize(s);
	for(int i=narray;i>0;i--)
	    decimal+=getdecimal(s[i-1],narray-i);
    }
    return decimal;
}
int power(int base,int n){
    int res=1;
    while(n-->0){
	res*=base;
    }
    return res;
}
int getdecimal(char c,int pos){
    int n=0;
    if(c>='0' && c<='9')
	n=c-'0';	
    else if(c>='A' && c<='F')
	n=c+10-'A';
    else if(c>='a' && c<='f')
	n=c+10-'a';
    else
	n=0;
    return (n*power(16,pos));
}
int arrsize(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';++i)
	;
    return i;
}
