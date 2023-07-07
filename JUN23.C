#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	long int a, i, flag, x, y, s;
	clrscr();
//	printf("a: ");
//	scanf("%ld", &a);
	printf("x: ");
	scanf("%ld", &x);
	printf("y: ");
	scanf("%ld", &y);
	for(a = x; a <= y; a++){
		s = sqrt(a);
		flag = 1;
		for(i = 2; i <= s; i++){
			if (a == 1){
				flag = 0;
				break;
			}
			if (a % i == 0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%ld\n", a);
		}
	}
	getch();
}