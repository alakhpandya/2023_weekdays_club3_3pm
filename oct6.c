#include<stdio.h>
#include<string.h>

// string: character arrays are called strings.
int main()
{
    // float a[5];
    char a[6], first_name[50];
    int i;
    printf("First name:");
    /*
    for(i = 0; i < 5; i++){
        scanf(" %c", &a[i]);
    }
    a[i] = '\0';
    */
    // scanf("%s", &a);

    // printf("Your name is: %s", a);
    /*
    printf("Your name is: ");
    for(i = 0; i < 5; i++){
        printf("%c", a[i]);
    }
    */
    // scanf("%s", &first_name);
    gets(first_name);
    printf("Your first name: %s", first_name);
    return 0;
}