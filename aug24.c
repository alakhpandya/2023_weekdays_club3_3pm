#include<stdio.h>
#include<math.h>
// Write a program that asks two integers (a & b) from user. Create a function that takes ONE INTEGER as argument and returns whether its Prime or not. Use this function and print all the Prime numbers between a & b (including both).

// 1003
int primeCheck(int n){  // 9
    int i, m;
    m = sqrt(n);    //  3
    if (n == 1){
        return 0;
    }
    for(i = 2; i <= m; i++){    // for(i=2; i <= 3; i++)
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b, i;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    for(i = a; i <= b; i++){
        if (primeCheck(i) == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}

// HW:
// Write a program that asks two integers (a & b) from user. Create a function that takes ONE INTEGER as argument and returns whether its Armstrong number or not. Use this function and print all the Armstrong numbers between a & b (including both).
// Write a program that asks two integers (a & b) from user. Create a function that takes ONE INTEGER as argument and returns whether its Perfect number or not. Use this function and print all the Perfect numbers between a & b (including both).
// 38: 1 + 2 + 19 = 22, 28: 1 + 2 + 4 + 7 + 14 = 28