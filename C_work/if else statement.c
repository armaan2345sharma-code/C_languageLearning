/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char k;
printf("give the letter");
scanf("%c",&k);
if(k>='a'&& k<='z'){
    printf("it's small case");
}
else{
    printf("its capital case");
}

}