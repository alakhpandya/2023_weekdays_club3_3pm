#include<stdio.h>
#include<conio.h>
/*
Take 20 integers inputs from the user and print the followings:
1. No of +ve numbers
2. No of -ve numbers
3. No of zeros
4. No of odd numbers
5. No of even numbers
6. No of prime numbers
*/
/*
void main(){
	int a[10], i, pos=0, even=0;
	clrscr();
	printf("Enter %d integers:\n", 10);
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);

		if (a[i] > 0){
			pos++;
		}
		if (a[i] % 2 == 0){
			even++;
		}
	}

	printf("No of +ve numbers = %d\n", pos);
	getch();
}
*/

void main(){
//	long int a, b;
	int i = 9, j, flag=1;
	clrscr();
//	printf("Enter a & b:\n");
//	scanf("%ld%ld", &a, &b);
//	for(i = a; i < b; i++){
		for(j = 2; j < i; j++){
			if (i % j == 0){
				flag = 0;
				break;
			}
		}

//	}
	getch();
}
// next lecture: flag variable, optimizing prime number program