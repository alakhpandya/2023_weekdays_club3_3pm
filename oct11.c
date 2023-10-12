#include<stdio.h>
#include<string.h>

int main()
{

    char pwd[20], cpwd[20], encrypted_pwd[20];
    int result;

    printf("Password: ");
    gets(pwd);
    // scanf("%s", &pwd);

    // printf("Confirm Password: ");
    // gets(cpwd);
    // scanf("%s", &cpwd);

    /*
    result = strcmp(pwd, cpwd);
    // printf("%d", result);
    if (result == 0){
    // if (!result){
        printf("Success!");
    }
    else{
        printf("Did not match...");
    }
    */
    /*
    if (-0.005){
        printf("if executed.\n");
    }
    printf("End of the code.");
    */

    // Length of a string:
    // result = strlen(pwd);
    
    /*
    printf("String - 1: %d\n", strlen(pwd));
    printf("String - 2: %d\n", strlen(cpwd));
    */
    /*
    strcpy(encrypted_pwd, pwd);
    
    strrev(encrypted_pwd);
    printf("Encrypted Password: %s", encrypted_pwd);
    */

    return 0;
}