#include<stdio.h>

int main()
{
    // Ask salaries & overtime of 5 employees and store them in a 2D array. Also print net income of the employee given by user.
    int a[5][2], i, j, e;
    for(i = 0; i < 5; i++){
        printf("Salary & Overtime of Employee-%d:\n", i);
        for(j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Emp no: ");
    scanf("%d", &e);

    printf("Salary: %d\n", a[e][0]);
    printf("Overtime: %d\n", a[e][1]);
 
    printf("Net Income: %d", a[e][0] + a[e][1]);
    return 0;
}

// Next lecture: Matrix examples