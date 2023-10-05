/*
In a task, we need to take multiple 3x3 arrays from user. It is always a good idea to make a function for the task that we do over and over again so, create a function that scans a 3x3 array from the user & stores it.
*/

#include<stdio.h>

void scanArray(int *pArr, int size){
    int i, j;
    printf("Enter %d integers:\n", size*size);
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            scanf("%d", pArr);
            pArr++;
        }
    }
}
void printArray(int *pArr, int size){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("%d\t", *pArr);
            pArr++;
        }
        printf("\n");
    }

}
int main()
{
    int a[10][10], b[10][10], i, j, *pa, *pb, sA, sB;
    pa = &a[0][0];
    // pb = b;
    pb = &b[0][0];
    printf("Size of a: ");
    scanf("%d", &sA);
    printf("Input array a:");
    scanArray(pa, sA);
    printf("Size of b: ");
    scanf("%d", &sB);
    printf("Input array b:");
    scanArray(pb, sB);
    printf("\nArray a:\n");
    // for(i = 0; i < 3; i++){
    //     for(j = 0; j < 3; j++){
    //         printf("%d\t", b[i][j]);
    //     }
    //     printf("\n");
    // }
    printArray(pa, sA);
    printf("\nArray b:\n");
    printArray(pb, sB);
    return 0;
}

// HW: Write a program with functions scanArray. printArray & reverseArray which take array input, print array on the output and reverse the array whose pointer is provided in the argument along with its number of rows & number of columns. Ask an array of user-defined size from the user, print it, reverse it and also print the reversed array. Note: you should scan tha array from user using scanArray( ) function, print the array using printArray( ) function and reverse the array using reverseArray( ) function only.