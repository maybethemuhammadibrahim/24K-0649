/*While*/

#include<stdio.h>
int main(){
    
    for(int a=0;a<=5;a++){
    if(a==0 || a==5)
        printf("* *");
    else if (a==66 || a==68)
        printf("  %c   %c  \n",a+1, a+3);  
    else
        printf("    %c    \n",a+2);

   }

}