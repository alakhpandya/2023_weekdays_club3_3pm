#include<stdio.h>

struct user{
    char user_name[20], pwd[20];
    float balance;
};

int main()
{
    // File handling;
    struct user u[7];
    int i;
    FILE *acc;

    for(i = 0; i < 7; i++){
        fflush(stdin);

        printf("User name: ");
        gets(u[i].user_name);

        printf("Password: ");
        gets(u[i].pwd);

        printf("Balance: ");
        scanf("%f", &u[i].balance);
    }

    acc = fopen("account.txt", "w");
    
    for(i = 0; i < 7; i++){
        fprintf(acc, "%s, ", u[i].user_name);
        fprintf(acc, "%s, ", u[i].pwd);
        fprintf(acc, "%.2f\n", u[i].balance);
    }
    
    fclose(acc);
    return 0;
}