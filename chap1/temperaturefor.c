#include <stdio.h>
//Print Farenheit to Celcius table backwards
main(){
    int lower,upper,step;
    float fahr,cel;
    fahr=lower=0;
    upper=300;

    printf("Celcius to Farenheit  Table\n");
    printf("Celcius Fahr\n");
    for(fahr=300;fahr>=lower;fahr-=30){
	cel=(5*(fahr-32))/9;
	printf("%3.2f\t%3.2f\n",cel,fahr);
    }
}
