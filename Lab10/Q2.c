/*Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.*/
#include <stdio.h>
#include <math.h>

struct coordinates{
    int x;
    int y;
}points[2],rectangle[2];

float distance_between_points(){
    return sqrt(pow((points[0].x - points[1].x),2) + pow((points[0].y - points[1].y),2));
}

int main() {
    int input,i;
    
   printf("Enter data to find distance b/w two points\n");
    for(int i=0;i<2;i++){
        printf("Enter x of %d-point: ",i+1);
        scanf(" %d",&points[i].x);
        printf("Enter y of %d-point: ",i+1);
        scanf(" %d",&points[i].y);
    }
        
    printf("\nThe Distance b/w points is: %f",distance_between_points());
        
    //assuming coordinated of rectangle 
    //minimum
    rectangle[0].x = 0;
    rectangle[0].y = 0;
    //maximum
    rectangle[1].x = 5;
    rectangle[1].y = 5;
    
    for(int i=0; i<2 ; i++){
        if(points[i].x < rectangle[1].x && points[i].y < rectangle[1].y){
            printf("\nPoint %d lies within the rectangle.",i+1);
        }
        else{
            printf("\nPoint %d does not lie within the rectangle.",i+1);
        }
    }
    
    return 0;
}
