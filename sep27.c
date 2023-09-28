/*
Write a C program that takes 5 integers from user, store them in an array using pointer & then reverse the array using pointers.
*/

#include<stdio.h>

int main()
{
    int a[5], i, temp, *ps, *pe;
    ps = &a[0];
    pe = &a[4];
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", ps);
        ps++;
    }

    // Reversing array:
    ps = &a[0];
    for(i = 0; i < 2; i++){
        temp = *ps;
        *ps = *pe;
        *pe = temp;
        ps++;
        pe--;
    }

    printf("\nArray:\n");
    for( i = 0; i < 4; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d", a[i]);
    return 0;
}