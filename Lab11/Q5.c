#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct Event{
    char eventName[30];
    struct date date;
    char location[30];
};

void printData(struct Event *event){
    printf("Events");
    for(int i=0 ; i<4 ; i++){
        printf("\n=====================================");
        printf("\nEvent Name  : %s",event[i].eventName);
        printf("\nLocation    : %s",event[i].location);
        printf("\nDate:(%d,%d,%d)",event[i].date.day,event[i].date.month,event[i].date.year);
        printf("\n=====================================");
    }
}

int main(){
    //hardcoding event details
    struct Event event[4]= {{"Event01",{10,20,2024},"Karachi"},
                            {"Event02",{10,20,2023},"Lahor"},
                            {"Event03",{10,20,2022},"Quetta"},
                            {"Event04",{10,20,2021},"Islamabad"}};

    printData(event);

}
