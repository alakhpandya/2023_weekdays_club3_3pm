#include<stdio.h>
#include<string.h>

int main()
{
    int a, i, cur;
    char s[5][100], new_user[100];
    FILE *f;
    /*
    f = fopen("numbers.txt", "r");
    for(i = 0; i < 5; i++){
        fscanf(f, "%d", &a);
        printf("%d\n", a);
    }
    fclose(f);
    */
    
    f = fopen("account.txt", "r");
    fgets(s[0], 100, f);
    printf("%s", s[0]);
    cur = ftell(f);
    printf("length: %d\n", strlen(s[0]));
    printf("Cursor: %d\n", cur);
    fseek(f, 40, SEEK_SET);
    fgets(s[1], 100, f);
    printf("%s", s[1]);
    cur = ftell(f);
    printf("Cursor: %d\n", cur);
    fclose(f);
    
    /*
    printf("New user: ");
    gets(new_user);
    f = fopen("account.txt", "a");
    fputs(new_user, f);
    fclose(f);
    */
    return 0;
}