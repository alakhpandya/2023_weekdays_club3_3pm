#include<stdio.h>
#include<conio.h>
/*
void main(){
	clrscr();
	printf("Sr\tSub\tT1\tT2\tT3\n");
	printf("1\tC\t98\t92\t99\n");
	printf("2\tEnvironment\t80\t79\t90\n");

	getch();
}
*/
/*
par = 7            		10
stroke  score
1       Hole in One!            1
2,3,4	Eagle                   2 to 7
5,6	Birdie                  8,9
7	Par			10
8,9	Bogey                   11,12
10	Double Bogey            13
11,..	Go Home                 14 or more
*/

/*
a = 5
b = 5 * 3 - 4 / 2

a == 5

Next class: if, if-elseif-else flow, presidence of operators
*/

void main(){
	int par, strokes;
	clrscr();
	printf("par: ");
	scanf("%d", &par);
	printf("strokes: ");
	scanf("%d", &strokes);
	if(strokes == 1){
		printf("Hole in One!\n");
	}
	else if(strokes <= par-3){
		printf("Eagle\n");
	}
	else if(strokes < par){
		printf("Birdie.\n");
	}
	getch();

}