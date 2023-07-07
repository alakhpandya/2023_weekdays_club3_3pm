#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>

/*
void main(){
	int system_otp = 1234, user_otp, attempt=0;
	clrscr();

	while(attempt < 3){
		printf("Otp :");
		scanf("%d", &user_otp);
		if (user_otp == system_otp){
			printf("Login Successful!\n");
			break;
		}
		else{
			printf("Incorrect OTP! Please try again...\n");
		}
		attempt++;
		printf("Attempt left: %d\n", 3-attempt);
	}

	getch();
}
*/

// switch-case
void main(){
	int a, b;
	float ans;
	char op;
	clrscr();
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("Enter operation (+, -, * or /): ");
//	fflush(stdin);
	scanf(" %c", &op);
	switch(op){
		case '+':
			ans = a + b;
			printf("Ans = %.2f\n", ans);
			break;
		case '-':
			ans = a - b;
			printf("Ans = %.2f\n", ans);
			break;
		case '*':
			ans = a * b;
			printf("Ans = %.2f\n", ans);
			break;
		case '/':
			ans =  (float) a / (float) b;
			printf("Ans = %.2f\n", ans);
			break;
		default:
			printf("Invalid Operation, please try again...\n");
	}
	getch();
}
/*
Next Class: marks of 5 students
*/
