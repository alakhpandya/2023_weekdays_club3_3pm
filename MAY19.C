#include<stdio.h>
#include<conio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021

void main(){
	int JAN = 1, DEC = 12, year, month;
	clrscr();
	printf("General Well-being Log\n");
	printf("======================\n");
	printf("Set the year and month for the well-being log (YYYY MM): ");
	scanf("%d%d", &year, &month);
	if (year < MIN_YEAR || year > MAX_YEAR){
		printf("ERROR: The year must be between 2010 and 2021 inclusive ");
	}
	if(month < JAN || month > DEC){
		printf("ERROR: Jan.(1) - Dec.(12)");
	}
	if((JAN <= month && month <= DEC) && (MIN_YEAR <= year && year <= MAX_YEAR) ){
		printf("*** Log date set! ***");
	}
	getch();
}