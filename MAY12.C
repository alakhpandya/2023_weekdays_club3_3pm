/*
Next Class: pre increment, post increment, pre decrement, post decrement
operators, logical operators, bitwise operators, some more examples of
if-else, loop.
*/
#include<stdio.h>
#include<conio.h>

void main(){

	int a = 14, b = 4, c;
	clrscr();
	printf("a = %d\n", ++a);   // a = 15
	printf("a = %d\n", a);   // a = 15
	c = b + ++a; 	// c = b + a  = 20
	printf("c = %d\n", c);     // a = 16
	getch();


}