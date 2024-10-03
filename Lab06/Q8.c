/*While*/

#include<stdio.h>
int main(){
    
    for(int a='A';a<='B';a++){
    if(a=='A' || a=='E')
        printf("%c %c %c %c %c\n",a, a+1, a+2, a+3, a+4);
    else if (a=='B' || a=='D')
        printf("  %c   %c  \n",a+1, a+4);  
    else
        printf("    %c    \n",a+2);

   }

}