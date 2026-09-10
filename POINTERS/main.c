/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int k=24;
    int *y;
    y=&k;
    
    
    
    printf("value of k %p\n",(void*)y);
    printf("value of k %d\n",&k);//not a reliable way to show address
    printf("address of y %d\n",&y);
    printf("address of y %p",(void*)&y);// void* is a wayto tell printf to treat it as pointer
    
}