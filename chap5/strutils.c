int strsize(char *c){
    int i;
    for(i=0;*c!='\0';c++,i++)
	;
    return i;
}

