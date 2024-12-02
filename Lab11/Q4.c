#include <stdio.h>

struct Student{
    char rollNo[6];
    char name[15];
    struct marks{
        int maths;
        int science;
        int english;
    }marks;
    float avgMarks;
};


void getData(struct Student *students){
    for(int i=0 ; i<5 ; i++){
        printf("Enter Roll No(max 6): ");  scanf("%s",students[i].rollNo);
        printf("Enter Name(max 15): ");  scanf("%s",students[i].name);
        printf("Marks Of Maths: ");  scanf("%d",&students[i].marks.maths);
        printf("Marks Of Science: ");  scanf("%d",&students[i].marks.science);
        printf("Marks Of English: ");  scanf("%d",&students[i].marks.english);
        students[i].avgMarks = (students[i].marks.maths+students[i].marks.science+students[i].marks.english)/3;

    }
}

void printData(struct Student *students){
    
    for(int i=0 ; i<5 ; i++){
        printf("\nRoll No(max 6): %s",students[i].rollNo);
        printf("\nName(max 15): %s",students[i].name);
        printf("\nAverage Marks: %.3f",students[i].avgMarks);
    
    }
}

int main(){
    struct Student students[5];

    getData(students);

    printData(students);

    return 0;
}
