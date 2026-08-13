/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num1;
   printf("give the number");
   scanf("%d",&num1);
   if(num1%2==0){
       printf("number is even");
   }
else{
    printf("number is odd");
}
}