#include <stdio.h>

struct Company{
    char name[50];
    int yearEstb;
    char departments[5][50];
};

int main(){
    //hardcoding data
    struct Company company = {"dell",1990,{"finance","research","security","development","hr"}};
    printf("\nCompany Data:");
    printf("\n==============");
    printf("\nCompany Name:%s",company.name);
    printf("\nYear ESTB.:%d",company.yearEstb);
    printf("\nDepartments:");
    for(int i=0 ; i<5 ; i++){
        printf("\nDepartment %d:%s",i+1,company.departments[i]);
    }
    
}
