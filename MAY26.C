#include<stdio.h>
#include<conio.h>

/*
void main(){
	int n, count=0;
	clrscr();
	printf("n : ");
	scanf("%d", &n);
	if (n == 0){
		count = 1;
	}
	else{
		while (n > 0 || n < 0){
			n = n / 10;
			count++;
		}
	}
	printf("Number of digits = %d", count);
	getch();
}
*/

// do while loop:

void main(){
	int n, count=0;
	// clrscr();
	printf("n: ");
	scanf("%d", &n);
	do{
		n = n / 10;
		count++;
	}while(n > 0 || n < 0);
	printf("Number of digits = %d", count);
	// getch();
}
