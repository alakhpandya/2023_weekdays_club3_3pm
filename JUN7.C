// Write a C program that takes marks(int) of 5 students and print the marks
// of the student given by user.
#include<stdio.h>
#include<conio.h>

void main(){
	int s[5], i, sr_no;
	clrscr();
	printf("Enter the marks of the following students:\n");
	for(i = 0; i < 5; i++){
		printf("student-%d: ", i);
		scanf("%d", &s[i]);
	}
//	printf("student-1: ");
//	scanf("%d", &s[1]);

	printf("Sr.no: ");
	scanf("%d", &sr_no);    // 3

	printf("%d", s[sr_no]);
	getch();
}