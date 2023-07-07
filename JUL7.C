#include<stdio.h>
#include<conio.h>
/*
void main(){
	char a;
	clrscr();
	printf("insert a character: ");
	scanf(" %c", &a);
	a = getch();
	printf("\nThe character you entered is: %c", a);
	getch();
}
*/
void main(){
	int a[5][4], i, j, stu, sub;
	clrscr();
	for(i=0; i<5; i++){
		printf("Enter marks of student-%d:\n", i);
		for(j=0; j<4; j++){
			printf("Sub-%d: ", j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Student\tSub-0\tSub-1\tSub-2\tSub-3\n");
	for(i=0; i<5; i++){
		printf("s%d\t", i);
		for(j=0; j<4; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Enter student no: ");
	scanf("%d", &stu);
	printf("Subject no: ");
	scanf("%d", &sub);
	printf("Marks of student-%d for subject-%d: %d", stu, sub, a[stu][sub]);
	getch();
}