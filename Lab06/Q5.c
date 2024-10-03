/*While*/

#include<stdio.h>
int main(){
    
    for(int a=0;a<=6;a++){
        if((a==0) || (a==6)){
            printf("* * * * *\n");
        }
        else{
            printf("*       *\n");
        }
    }

}