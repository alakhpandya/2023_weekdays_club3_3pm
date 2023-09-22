#include<stdio.h>

// Ask two integers from user, and store them in variables A & B (using their pointers). Add both the variables and store it in a varible C (using their pointers) and also print the answer C (using its pointer).
/*
int main()
{
    int A, B, C, *pa, *pb, *pc;
    pa = &A;
    pb = &B;
    pc = &C;
    printf("A: ");
    scanf("%d", pa);
    printf("B: ");
    scanf("%d", pb);

    *pc = *pa + *pb;

    printf("Sum = %d", *pc);
    return 0;
}
*/
// Create an integer array a[5], ask 5 integers from user and store them in that array using pointer. Print the array using icrementing pointer.

int main(){
    int a[5], i, *pa;

    pa = &a[0];

    for(i = 0; i < 5; i++){
        printf("a[%d]: ", i);
        scanf("%d", pa);
        // printf("Current address = %p\n", pa);
        pa++;
    }

    for(i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}