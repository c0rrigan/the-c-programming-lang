#include <stdio.h>
void month_year(int year,int num_day,int *month,int *day);
int day_of_year(int year,int month,int day);
char *month_name(int n);
static char *months[] = {"Not a month","January","February","March","April","May",
			"July","August","September","October","November","December"};
 
static int days_months[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31}
				    ,{0,31,29,31,30,31,30,31,31,30,31,30,31}};

int main(){
    int month,day;
    month_year(2017,1,&month,&day);
    printf("%d %d\n",month,day);
    printf("%d\n",day_of_year(2017,1,1));
    return 0;
}

char *month_name(int n){
    return (n<0||n>12)?months[0]:months[n];
}

int day_of_year(int year,int month,int day){
    int leap = (year%4==0)?1:0;
    while(--month>0)
	day+=days_months[leap][month];
    return day;
}
void month_year(int year,int num_day,int *month,int *day){
    *month = 0;
    *day=0;
    int leap = (year%4==0)?1:0;
    while(num_day>days_months[leap][*month]){
	num_day-=days_months[leap][*month];
	++(*month);
    }
    *day+=num_day;
}
