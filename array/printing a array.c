/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int k,v,i;
    printf("enter amount of data");
    scanf("%d",&k);
    int array[k];
    for(i=0;i<k;i++){
        printf("give the input%d",i+1);
        scanf("%d",&array[i]);//i is for the location of the program
    }
    for(i=0;i<k;i++){
        printf("%d\n",array[i]);
    }
    
}