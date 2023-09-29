/*
In a task, we need to take multiple 3x3 arrays from user. It is always a good idea to make a function for the task that we do over and over again so, create a function that scans a 3x3 array from the user & stores it.
*/

#include<stdio.h>

int main()
{
    int a[3][3], i, j;
    printf("Enter 9 integers:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}