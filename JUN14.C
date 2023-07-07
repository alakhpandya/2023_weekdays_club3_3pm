#include<stdio.h>
#include<conio.h>

void main(){
	int a[5], i, min;
	clrscr();
	printf("Enter 5	integers:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	min = a[0];
	for(i = 1; i < 5; i++){
		if (a[i] < min){
			min = a[i];
		}
	}
	printf("Smallest integer = %d", min);
	getch();
}