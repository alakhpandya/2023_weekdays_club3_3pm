#include<stdio.h>
#include<stdlib.h>
#define r 3

int main()
{
    int i, j, k, n, flag;
    float a[r][r], id[r][r], temp;
    // scanning matrix a:
    printf("Enter numbers of matrix A:\n");
    for(i = 0; i < r; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < r; j++){
            scanf("%f", &a[i][j]);
        }
    }

    // creating id matrix:
    for(i = 0; i < r; i++){
        for(j = 0; j < r; j++){
            if (i == j){
                id[i][j] = 1;
            }
            else{
                id[i][j] = 0;
            }
        }
    }

    for(k = 0; k < r; k++){
        // checking if a00 is zero
        if (a[k][k] == 0){
            // checking the rows below till the last row
            n = k+1;
            flag = 0;
            while (n < r){
                if (a[n][k] != 0){
                    // swap nth row by kth row
                    for(j = 0; j < r; j++){
                        temp = a[k][j];
                        a[k][j] = a[n][j];
                        a[n][j] = temp;

                        temp = id[k][j];
                        id[k][j] = id[n][j];
                        id[n][j] = temp;
                    }
                    flag = 1;
                    break;
                }
                n++;
            }
            if (flag == 0){
                printf("Matrix is non-invertible...");
                exit(0);
            }
        }
        // Dividing R0 by a00
        temp = a[k][k];
        for(j = 0; j < r; j++){
            a[k][j] = a[k][j] / temp;
            id[k][j] = id[k][j] / temp;
        }
        // setting 1 at the remaining places
        for(i = 0; i < r; i++){
            if (i != k){
                temp = a[i][k];
                for(j = 0; j < r; j++){
                    a[i][j] = a[i][j] - a[k][j]*temp;
                    id[i][j] = id[i][j] - id[k][j]*temp;
                }
            }
        }
    }


    // printing both the matrices:
    printf("Matrix A:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < r; j++){
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Id matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < r; j++){
            printf("%.3f\t", id[i][j]);
        }
        printf("\n");
    }
    return 0;
}