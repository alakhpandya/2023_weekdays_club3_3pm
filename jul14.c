#include<stdio.h>
#define SIZE 3

int main()
{
    // Ask integer values for two 3x3 matrices, store them and store their addition in another 3x3 matrix. Print that matrix.
    // Ask integer values for two 3x3 matrices, store them and store their multiplication in another 3x3 matrix. Print that matrix.
    
    // int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
    // int i, j;

    /*
    // Scanning the matrices:
    printf("Enter %d integers for martrix A:\n", SIZE*SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < SIZE; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d integers for martrix B:\n", SIZE*SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < SIZE; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // Printing both of the matrices:
    printf("Martrix A:\n");
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Martrix B:\n");
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    */

    int a[5] = {9, 3, 11, -2, 4};
    int i, p = 1;
    for(i = 0; i < 5; i++){
        p = p * a[i];
    }
    printf("%d", p);
    return 0;
}