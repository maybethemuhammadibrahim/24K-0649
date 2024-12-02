#include <stdio.h>

struct Employee{
    char id[6];
    char name[15];
    float salary;
    struct Address{
        char city[10];
        char zipCode[10];
    }address;
};


void getData(struct Employee *employees, int n){
    
    for(int i=0 ; i<n ; i++){
        printf("Enter ID(max 6): ");  scanf("%s",employees[i].id);
        printf("Enter Name(max 15): ");  scanf("%s",employees[i].name);
        printf("Enter Salary :");   scanf("%f",&employees[i].salary);
        printf("Enter City   : ");  scanf("%s",employees[i].address.city);
        printf("Enter ZipCode: ");  scanf("%s",employees[i].address.zipCode);
        

    }
}

void putDataInFile(struct Employee *employees, int n){
    FILE *file;
    file = fopen("employees.txt","w");
    for(int i=0 ; i<n ; i++){
        fprintf(file,"%s %s %f %s %s \n",employees[i].id,employees[i].name,employees[i].salary,employees[i].address.city,employees[i].address.zipCode);
    }
    fclose(file);
};

void readDataFromFile(struct Employee *employees){
    int i=0;
    FILE *file;
    file = fopen("employees.txt","r");
    while(fscanf(file, "%s %s %f %s %s \n",employees[i].id,employees[i].name,&employees[i].salary,employees[i].address.city,employees[i].address.zipCode) != EOF){
        i++;
    }
    fclose(file);

}

void printData(struct Employee *employees, int n){
    
    for(int i=0 ; i<n ; i++){
        printf("\nID(max 6): %s",employees[i].id);
        printf("\nName(max 15): %s",employees[i].name);
        printf("\nSalary : %.3f",employees[i].salary);
        printf("\nCity   : %s",employees[i].address.city);
        printf("\nZipCode: %s",employees[i].address.zipCode);
        

    }
}

int main(){
    struct Employee employees[5];
    
    int n=4;
    getData(employees,n);
    putDataInFile(employees,n);
    readDataFromFile(employees);
    printData(employees,n);
    
    return 0;
}
