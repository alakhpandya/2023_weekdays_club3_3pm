#include<stdio.h>

struct user{
    char user_name[20], pwd[20];
    float balance;
    char raw_data[100];
};


int main()
{
    struct user u[7];
    int i;
    FILE *fp;

    fp = fopen("D:\\temp.txt", "r");
    fscanf(fp, "%s", &u[0].raw_data);
    // fscanf(fp, "%f", &u[0].balance);
    fclose(fp);

    // printf("Data from the file is: %.2f", u[0].balance);
    printf("Data from the file is: %s", u[0].raw_data);

    return 0;
}