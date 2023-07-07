/*
#include<stdio.h>
#include<conio.h>

// creating a user defined array

void main(){
	int n, i;
	int sub[100] = {0};
	clrscr();
	printf("no of subjects =");
	scanf("%d", &n);
	printf("Enter marks of %d subjects:\n", n);
	for(i=0; i<n; i++){
		scanf("%d", &sub[i]);
	}
	printf("Your result:\n");
	for(i=0; i<n; i++){
		printf("Sub %d: %d\n", i, sub[i]);
	}

//	printf("Sub 4: %d", sub[4]);
//	printf("Sub 2: %d", sub[2]);
	getch();
}


// Defining global variables & constants

#define c 30
#define PI 3.1415
#define area PI*r*r


void f1(){
	int b = 10;
//	printf("a = %d", a);
	printf("c = %d", c);
}


void main(){
	int a=5, b = 3;
	float r;
	clrscr();
//	printf("b = %d", b);
//	printf("c = %d", c);
	printf("Radius: ");
	scanf("%f", &r);
	printf("Area of circle with radius %.2f = %.3f", r, area);
	getch();
}
*/
// Next session: 2D arrays