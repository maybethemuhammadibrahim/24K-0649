// Defne a date structure with variables day, month and year. Write functions to
// 1. Calculate the number of days between two days.
// 2. Find the day of the week for a given date
// 3. Check if a date is valid accounting for leap years.
#include <stdio.h>

struct date
{
    int day;
    int month;//assuming months as int
    int year;
};

int calculateDays();
int calculateDaysInMonths();

int main(){
    struct date date1 = {1,3,2024};
    struct date date2 = {1,11,2000};
    calculateDays(date1, date2);
}

int calculateDays(struct date date1, struct date date2){
    int years=0, months=0, days=0, total;

    //assuming date1 > date2
    years = date1.year - date2.year;
    total = (years * 365) + (years/4);


    int dayOfEachMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(date1.month>date2.month){     
        for(int i=date2.month ; i<date1.month ; i++){
            months += dayOfEachMonth[i];
            printf("%d\n", months);
        }
    }
    else if(date2.month>date1.month){
        for(int i=date2.month ; i<=12 ; i++){
            months += dayOfEachMonth[i];
        }
        for(int i=0 ; i<=date1.month ; i++){
            months += dayOfEachMonth[i];
        }
    }
    total += months; 

    printf("Days=%d", total);
    
}
