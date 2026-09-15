#include <stdio.h>

int main()
{
     int k[7]={};
   for(int i=0;i<7;){
    scanf("%d",&k[i]);
    i++;
   }
   int *num;
   num=k;
   for(int i=0;i<7;){
       if(*num==0){
        *num++;
        i++;
          continue;
       }
       else{
           printf("%d",*num);
       }
       *num++;
       i++;
   }
   int *zero;
   zero=k;
   for(int i=0;i<7;){
       if(*zero==0){
           printf("%d",*zero);
       }
       else{
        i++;
        *zero++;
           continue;
       }
       *zero++;
       i++;
   }
   
   
   
}