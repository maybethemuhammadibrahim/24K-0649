#include<stdio.h>
void main(){
    float gpa;
    printf("Enter GPA: ");    
    scanf("%f", &gpa);
    
    ((gpa>=0.0) && (gpa<1.0)) ?
        printf("Semester Failed(Registration Suspended)"):
        ((gpa>=1) && (gpa<2)) ?
        printf("On Probation"):
        ((gpa>=2) && (gpa<3))?
        printf("_"):
        ((gpa>=3) && (gpa<3.5))?
        printf("Dean's list"):
        ((gpa>=3.5) && (gpa<4))?
        printf("Highest honors for semester"):
        printf("GPA not entered correct");

}
