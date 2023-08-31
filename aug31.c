// Create structure to store a complex number. Ask 2 complex numbers from user and store them in that structure. Create one more variable in the same structure to store answer of their addition and print all of them in appropriate way.

/*
    9
*/
#include<stdio.h>
struct complex{
    float real;
    float img;
};

int main()
{
    struct complex c[3];
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter complex no-%d:\n", i);
        printf("real part: ");
        scanf("%f", &c[i].real);
        printf("imaginary part: ");
        scanf("%f", &c[i].img);
    }

    // Addition:
    c[2].real = c[0].real + c[1].real;
    c[2].img = c[0].img + c[1].img;

    printf("(%.2f + %.2f i) + (%.2f + %.2f i) = (%.2f + %.2f i)", c[0].real, c[0].img, c[1].real, c[1].img, c[2].real, c[2].img);
    return 0;
}