#include<stdio.h>
int main(){
    char input[100]={0};
    char vowels[5]={0};
    char alphabets[5]={'A','E','I','O','U'};
    
    printf("Enter the string(use _ for spaces): ");
    scanf("%s",input);
    //gets(input); not working
    
    for(int i=0;input[i]!='\0';i++){
        if(input[i]=='a' || input[i]=='A'){
            vowels[0]++;
        }
        else if(input[i]=='e' || input[i]=='E'){
            vowels[1]++;
        }
        else if(input[i]=='i' || input[i]=='I'){
            vowels[2]++;
        }
        else if(input[i]=='o' || input[i]=='O'){
            vowels[3]++;
        }
        else if(input[i]=='u' || input[i]=='U'){
            vowels[4]++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%c appears %d times\n",alphabets[i],vowels[i]);
    }
}
