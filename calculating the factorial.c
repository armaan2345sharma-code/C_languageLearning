/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,fac=1;
    printf("give the num");
    scanf("%d",&num);
    while(num>0){
        
        fac=fac*num;
        --num;
    }
    printf("fatorian num %d",fac);
    return 0;
}