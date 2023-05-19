#include<stdio.h>
#include<conio.h>

#define PI 3.1415

void main(){
	// creating global constants
	float r, a;
	clrscr();
	printf("r: ");
	scanf("%f", &r);
	a = PI * r * r;
	printf("\nArea = %.4f", a);
	getch();
}