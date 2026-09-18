#include <stdio.h>
struct Student{
    int rollnumber;
    char Name[100];
    float marks;
};
int main()
{
  struct Student S1={
    22,"Armaan Sharma",87
  };
  printf("roll no:%d,name:%s,marks:%2.f",S1.rollnumber,S1.Name,S1.marks);
}