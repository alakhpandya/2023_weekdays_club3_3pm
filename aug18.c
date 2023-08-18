#include<stdio.h>

void square(int p){
    printf("Square of p = %d", p * p);
}

float avg(int p, int q){
    float average;
    average = (p + q)/2.0;
    // printf("Average = %.2f", average);
    return average;
}

int main()
{
    // Take 4 integers from user, find average of first two and average of last two using avg function and add both the averages. Print the final answer.
    int a, b, c, d;
    float a1, a2, ans;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);
    // square(a);
    // printf("p = %d", p);

    // avg(10, 20);
    a1 = avg(a, b);
    a2 = avg(c, d);
    ans = a1 + a2;
    printf("Final ans = %.2f", ans);
    // printf("Final ans = %.2f", avg(a, b) + avg(c, d));
    return 0;
}

// Write a program to take 5 integers from user, find their factorials using a function named 'fact()' that takes a number as argument & returns its factorial. Add all the factorials at the end and print the final answer only.