/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int p=0,k,b=1223;
    
    do{
        printf("give the password in numerical\n");
        scanf("%d",&k);
        p++;
    if(k!=b && p<=2){
       printf("password is incorrect\n"); 
    }
    }
    
    while(k!=b && p<=2);
   if(k==b){
        printf("WELCOME");
    }
     else{
        printf("OVER ATTEMPTS");
    }
     
    
}