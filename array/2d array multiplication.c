/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int C[2][2];

    int A[2][2] = {
        {1,4},
        {1,5}
    };

    int B[2][2] = {
        {1,4},
        {1,5}
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            int sum = 0;

            for(int k = 0; k < 2; k++){
                sum += A[i][k] * B[k][j];
            }

            C[i][j] = sum;
        }
    }

    // Print result
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}