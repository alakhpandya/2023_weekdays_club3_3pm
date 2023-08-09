#include<stdio.h>

int main()
{
    int i, j, k;
    float a[3][3], id[3][3], temp;
    // scanning matrix a:
    printf("Enter numbers of matrix A:\n");
    for(i = 0; i < 3; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < 3; j++){
            scanf("%f", &a[i][j]);
        }
    }

    // creating id matrix:
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if (i == j){
                id[i][j] = 1;
            }
            else{
                id[i][j] = 0;
            }
        }
    }
    for(k = 0; k < 3; k++){
        // Dividing R0 by a00
        temp = a[k][k];
        for(j = 0; j < 3; j++){
            a[k][j] = a[k][j] / temp;
            id[k][j] = id[k][j] / temp;
        }
        // setting 1 at the remaining places
        for(i = 0; i < 3; i++){
            if (i != k){
                temp = a[i][k];
                for(j = 0; j < 3; j++){
                    a[i][j] = a[i][j] - a[k][j]*temp;
                    id[i][j] = id[i][j] - id[k][j]*temp;
                }
            }
        }
    }


    // printing both the matrices:
    printf("Matrix A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Id matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%.3f\t", id[i][j]);
        }
        printf("\n");
    }
    return 0;
}