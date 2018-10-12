#include<stdio.h>

int main(){
	int days_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
					//1  2  3  4  5  6  7  8  9  10 11 12 
	int year,month,day,sum_day;
	while(~scanf("%d/%d/%d",&year,&month,&day)){
		days_month[1] = 28;
		sum_day = 0;
		if((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0){//ÈòÄê 
			days_month[1]++; 
		}
		for(int i=0;i<month-1;i++)
			sum_day += days_month[i];
		sum_day += day;
		printf("%d\n",sum_day); 
	}
	return 0;
}
