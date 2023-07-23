// Matrix Multiplication
#include<stdio.h>
#define r 4
int main()
{
    int a[r][r], b[r][r], c[r][r];
    int i, j, k, sum;
    // Scanning the matrices:
    printf("Enter %d integers for martrix A:\n", r*r);
    for(i = 0; i < r; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < r; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d integers for martrix B:\n", r*r);
    for(i = 0; i < r; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < r; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(k = 0; k < r; k++){
        for(i = 0; i < r; i++){
            sum = 0;
            for(j = 0; j < r; j++){
                sum = sum + a[k][j]*b[j][i];
            }
            c[k][i] = sum;
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < r; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    // sum = a[0]*b[0] + a[1]*b[1] + a[2]*b[2]
    return 0;
}

/*
1. Learn how to find determinant of a matrix (value of a matrix)
2. Learn how to find inverse of a matrix using row reduction (Gauss - Jordan Method)
*/