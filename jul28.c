/*
n = 5
r = 3

     *           *           *      
    * *         * *         * *     
   * * *       * * *       * * *    
  * * * *     * * * *     * * * *   
 * * * * *   * * * * *   * * * * *  
 * * * * *   * * * * *   * * * * *  
  * * * *     * * * *     * * * *   
   * * *       * * *       * * *    
    * *         * *         * *     
     *           *           *      

*/
#include<stdio.h>

int main()
{
    int a[3][3];
    int i, j, k, diff;
    // Scanning the matrices:
    printf("Enter 9 integers for martrix A:\n");
    for(i = 0; i < 3; i++){
        printf("Row-%d:\n", i);
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}