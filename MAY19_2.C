/*
We use loop if and only if we want to repeat some part several times
We put those and only those instructions inside the loop which we want to repeat

Entry Control:
while loop
for loop

Exit Control:
do while loop
*/
#include<stdio.h>
#include<conio.h>

void main(){
	int x = 1;
	clrscr();
//	printf("%d x 1 = ");

	while(x <= 5){
		printf("Hello Vishv!\n");
		x++;
	}
	getch();
}
/*
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20


5 x 10 = 50
*/