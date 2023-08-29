// Structures
// Datatypes in C:
/*
Premitive Data types:
short int(%i - 2B), int(%d - 2B or 4B), long int(%ld - 4B), long long int(%lld - 8B), float(%f - 4B), double(%lf - 8B), long double(%Lf - 10B or 12B or 16B), char(%c - 1B)
Derived Data types:
Arrays, strings
User Defined Data type:
Structures
*/

// Write a program to store marks(int) & height(float) of 5 students and print marks & height of the student given by user.
#include<stdio.h>

struct Student{
    int marks;
    float height;
};

int main()
{
    int i, ch;
    struct Student a[5];
    // a.marks = 50;
    // a.height = 160.5;
    // printf("Marks of a: ");
    // scanf("%d", &a.marks);
    // printf("Height of a: ");
    // scanf("%f", &a.height);

    for(i = 0; i < 5; i++){
        printf("student-%d\nMarks:", i);
        scanf("%d", &a[i].marks);
        printf("Height: ");
        scanf("%f", &a[i].height);
    }
    return 0;
}

// Create a structure that takes length, breadth, height (all integers) and weight (flolat) of a wooden block and ask all these parameters from user. Also print them at the end.