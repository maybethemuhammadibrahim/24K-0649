// Design a structure to store information about travel packages, including package name,
// destination, duration, cost, and number of seats available. Write a program that allows
// users to book a travel package and display available packages.
#include <stdio.h>
#include <string.h>

struct packages
{
    char packageName[100];
    char destination[100];
    int durationInDays;
    float cost;
    int noOfSeats;

}listOfPackages[50] = {
    {"Package1", "Somalia",5,25,2},
    {"Package2", "Kenya",10,25,2},
    {"Package3", "Nigeria",2,25,2},
    {"Package4", "Congo",3,50,2}
    };//Haradcoded data

void getData();
void printData();
void findPackage();
int stringcomp();

int main(){
    int noOfPackages=4;
    printf("The following packages are available");
    printData(0, noOfPackages);
    
    printf("Enter the name of the package to book");
    printf("\n====================================");
    findPackage(noOfPackages);
}

//can also use this function instead of the hardcoded data
void getData(int noOfPackages){
    printf("Enter Data for the following data");
    printf("====================================");
    for(int i=0 ; i<noOfPackages ; i++){
        printf("Enter the name of Package(%d): ",i+1);   scanf("%s",listOfPackages[i].packageName);
        printf("Enter the Destination        : ");       scanf("%s",listOfPackages[i].destination);
        printf("Enter the Duration           : ");       scanf("%d",&listOfPackages[i].durationInDays);
        printf("Enter the Cost(USD)          : ");       scanf("%f",&listOfPackages[i].cost);
        printf("Enter the no. of Seats       : ");       scanf("%d",&listOfPackages[i].noOfSeats);
    }
    printf("====================================");
    printf("\n");
}

void printData(int start, int end){
    printf("\n====================================");
    for(int i=start ; i<end ; i++){
        printf("\nPackage Name     : %s",listOfPackages[i].packageName);
        printf("\nDestination      : %s",listOfPackages[i].destination);
        printf("\nDuration In Days : %d",listOfPackages[i].durationInDays);
        printf("\nCost(USD.)       : %.3f",listOfPackages[i].cost);
        printf("\nNo. Of Seats     : %d",listOfPackages[i].noOfSeats);
        printf("\n====================================");
    }
    
    printf("\n");
}

void findPackage(int n) {
    char title[50];
    int found;
    printf("\nEnter: ");
    scanf("%s", title);
    for (int i=0 ; i<n ; i++) {
        if (stringcomp(title, listOfPackages[i].packageName) == 1) {
            //printf("%d",i);
            printf("\nThe Following Package has been booked:\n");
            printData(i, i + 1);
            found=1;
            break;
        }
        else{
            found=0;
        }
    }
    found==0?printf("\nPackage not Found"):printf("\n");
}


int stringcomp(char arr1[], char arr2[]){
    int equal,i;
    if(strlen(arr1) == strlen(arr2)){
        for(i=0 ; i<strlen(arr1) ; i++){
            if(arr1[i] == arr2[i]){
                equal = 1;
            }
            else{
                equal = 0;
                break;
            }
        }
    }
    else{
        equal=0;
    }
    return equal;
}
