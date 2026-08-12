/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("give the percentage");
    scanf("%d",&num);
    
    if(num>35 & num<75){
        if(num<50){
            printf("need improv");
            
        }
        if(num>50){
            printf("pass");
        }
        }
    if(num>75){
        printf("distinction");
    }
    if(num<35){
        printf("fail");
    }
}