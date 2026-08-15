/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num,i;
    for(num=1;num<=5;num++){
        for(i=1;i<=num;i++){
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}