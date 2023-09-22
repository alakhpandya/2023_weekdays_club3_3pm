/*
Pointers:
*/

#include<stdio.h>

int main()
{
    int a, b;
    int *pa;

    pa = &a;

    // double a;
    // double b;
    // printf("b: ");
    // scanf("%d", &b);
    
    // printf("Value of a = %d\n", &a);     int => 4 Bytes
    // printf("Value of b = %d\n", &b);

    // printf("Value of a = %x\n", &a);
    // printf("Value of b = %x\n", &b);

    printf("Address of a = %p\n", &a);  // & is address operator
    // printf("Address of b = %p\n", &b);

    printf("Content in pa = %p\n", pa);

    printf("Enter value of a = ");
    scanf("%d", pa);

    // printf("a = %d", a);
    printf("a = %d", *pa);  // * is reference operator

    return 0;
}

/*
10 = A, 11 = B, 12 = C, 13 = D, 14 = E, 15 = F
address 1: 0101 1011 1000 1010 = 5B8A
Hex:         5   B     8   A

c31ffb9c = 32 bits = 4 Bytes
0000007c37fffc0c = 64 bits
*/