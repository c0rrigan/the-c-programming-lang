#include <stdio.h>

int main(){
    int c,i,bign,j;
    int ndigit[10];

    bign=0;
    for(i=0;i<10;++i)
	ndigit[i]=0;

    while((c=getchar())!=EOF){
	if(c>='0' && c<='9')
	    ++ndigit[c-'0'];
    }
    bign=ndigit[0];
    for(i=1;i<10;i++){
	if(bign<ndigit[i])
	    bign=ndigit[i];
    }
    for(i=bign;i>=1;i--){
	printf("%d|",i);
	for(j=0;j<10;j++){
	    if(ndigit[j]>=i){
		printf("█");
	    }
	    else
		printf(" ");
	 }
	printf("\n");
    }
    printf("n|0123456789\n");
    return 0;
}
