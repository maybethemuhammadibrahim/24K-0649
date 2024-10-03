/*While*/

#include<stdio.h>
int main(){
    
    for(int a='A';a<='F';a++){
    if(a=='A' || a=='F')
        printf("%c %c %c %c %c\n",a, a+1, a+2, a+3, a+4);
    else
        printf("%c       %c\n",a, a+4);   
    }

}