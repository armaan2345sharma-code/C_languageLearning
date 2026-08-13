/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1;
    printf("enter num");
    scanf("%d",&num1);
    switch(num1){
        case 1:
        printf("january");
        break;
        case 2:
        printf("feb");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("august");
        break;
        case 9:
        printf("september");
        break;
        case 10:
        printf("october");
        break;
        case 11:
        printf("november");
        break;
        case 12:
        printf("december");
        break;
        default:
        printf("invalid number");
    
    }
    

    return 0;
}