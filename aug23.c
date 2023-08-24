// Write a program that takes a number from user & prints its factorial
// Write a function that determines whether the integer given in its argument is a prime number or not.
// Write a program that asks two integers (a & b) from user. Create a function that takes ONE INTEGER as argument and returns whether its Prime or not. Use this function and print all the Prime numbers between a & b (including both).
#include<stdio.h>

int fact(int p){
    int fa = 1, i;
    for(i = 1; i <= p; i++){
        fa = fa * i;
    }
    return fa;
}

int main()
{
    int num, ans;
    printf("num: ");
    scanf("%d", &num);
    ans = fact(num);
    printf("%d! = %d", num, ans);
    return 0;
}