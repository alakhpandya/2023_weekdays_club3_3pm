#include<stdio.h>

void thansa_jivani(){
    printf("Thansa is a Village in Lathi Taluka in Amreli District of Gujarat State, India.\nIt is located 41 KM towards East from District head quarters Amreli. \n237 KM from State capital Gandhinagar.\nThansa Pin code is 365220 and postal head office is Damnagar.\nMuliyapat ( 4 KM ) , Kanchardi ( 4 KM ) , Suvagadh ( 5 KM ) , Bhatvadar ( 6 KM ) , Havtad ( 7 KM ) are the nearby Villages to Thansa.\nThansa is surrounded by Gariadhar Taluka towards South , Umrala Taluka towards East , Lilia Taluka towards South , Gadhada Taluka towards North.\n\n");
}

int main()
{
    // Functions
    // Example - 1:
    /*
    Cleaner: We don't need to give anything (argument), they don't give us anything back (return)
    Chef: We need to give something (argument), they don't give us anything back (return)
    Vegetable Vendor: We don't give anything (argument), they give us something back (return)
    Office Assistant: We need to give something (argument), they give us something back (return)
    */

    int a, b;
    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);

    if (a > b){
        thansa_jivani();
    }

    if (a - b > 0){
        thansa_jivani();
    }

    if ((a/b) > 1){
        thansa_jivani();
    }

    if (a * b > 10){
        thansa_jivani();
    }
    return 0;
}