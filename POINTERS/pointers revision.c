#include <stdio.h>
int modify(int*a){
    for(int k=0;k<5;k++){
        int gh=a[k];
        if(gh%2==0){
            gh=gh+5;
            a[k]=gh;
        }
        else{
           gh=gh*5;
           a[k]=gh;
        }
        
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr=arr;
    for(int i=0;i<5;i++){
        printf(" %d \n",ptr[i]);
    }
    int k;
    printf("the modify function \n");
    k=modify(ptr);
    for(int i=0;i<5;i++){
        printf(" %d \n",ptr[i]);
    }
    

}