#include <stdio.h>

struct address {
    int pin;
    int house;
};

struct employee {
    int EmployeNO;
    char Name[100];
    struct address adr;
    int salary;
};
void updateSalary(int *x,int slary){
    *x=slary;
}

int main()
{
   
    
    struct employee k[3] = {
        {1203, "Armaan Sharma", {1234, 45},12000},
        {1205, "Aman Sharma",   {1235, 46},13000},
        {1206, "Anaya Sharma",  {1236, 47},14000}

    };
    

    for(int i=0;i<3;i++){
        updateSalary(&k[i].salary,45000);
    }
    

    for(int i = 0; i < 3; i++) {
        printf("EmployeNum=%d, Name=%s, pincode=%d, houseNo=%d,salary=%d\n",
               k[i].EmployeNO,
               k[i].Name,
               k[i].adr.pin,
               k[i].adr.house,
               k[i].salary);}

    return 0;
}