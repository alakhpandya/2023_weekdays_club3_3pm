#include<stdio.h>

// pointers to function
/*
int add(int *p1, int *p2){
    int c;
    c = *p1 + *p2;
    return z;
}
*/
void add(int *p1, int *p2, int *p3){
    *p3 = *p1 + *p2;
}


int main()
{
    int a, b, c, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    printf("Enter two integers:\n");
    scanf("%d%d", pa, pb);

    add(pa, pb, pc);

    printf("Sum = %d", c);
    return 0;
}

/*
a[5] = {1,4,6,3,7}
b[5] = {2,2,5,8,9}
c[5] = {3,6,11,11,16}
*/